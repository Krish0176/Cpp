#include <bits/stdc++.h>
using namespace std;

struct Face {
    int axis, sign;
    int pts[4][2];
};

int permSign(const int p[3]) {
    int s = 1;
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (p[i] > p[j]) s = -s;
    return s;
}

int main() {
    vector<char> c;
    string t;
    while (cin >> t) c.push_back(t[0]);
    if (c.size() < 24) return 0;

    // face order: Top, Front, Down, Back, Left, Right
    Face faces[6] = {
        {1,  1, {{-1,-1},{1,-1},{-1,1},{1,1}}},   // Top
        {2,  1, {{-1,1},{1,1},{-1,-1},{1,-1}}},   // Front
        {1, -1, {{-1,1},{1,1},{-1,-1},{1,-1}}},   // Down
        {2, -1, {{1,1},{-1,1},{1,-1},{-1,-1}}},   // Back
        {0, -1, {{-1,1},{1,1},{-1,-1},{1,-1}}},   // Left
        {0,  1, {{1,1},{-1,1},{1,-1},{-1,-1}}}    // Right
    };

    // corner position -> colour on each axis (x, y, z)
    map<array<int,3>, array<char,3>> corners;
    for (int f = 0; f < 6; f++) {
        for (int i = 0; i < 4; i++) {
            int u = faces[f].pts[i][0], v = faces[f].pts[i][1];
            int ax = faces[f].axis;
            array<int,3> p = {0, 0, 0};
            p[ax] = faces[f].sign;
            if (ax == 0)      { p[2] = u; p[1] = v; }
            else if (ax == 1) { p[0] = u; p[2] = v; }
            else              { p[0] = u; p[1] = v; }
            if (!corners.count(p)) corners[p] = {0, 0, 0};
            corners[p][ax] = c[f * 4 + i];
        }
    }

    // colours that share a corner are adjacent; the rest are opposite
    map<char, set<char>> adj;
    for (auto &kv : corners)
        for (char a : kv.second)
            for (char b : kv.second)
                adj[a].insert(b);

    vector<char> colsAll;
    for (auto &kv : adj) colsAll.push_back(kv.first);

    map<char, pair<int,int>> pairOf;
    int pid = 0;
    for (char a : colsAll) {
        if (pairOf.count(a)) continue;
        char b = 0;
        for (char x : colsAll)
            if (!adj[a].count(x)) { b = x; break; }
        if (!b) continue;
        pairOf[a] = {pid, 0};
        pairOf[b] = {pid, 1};
        pid++;
    }

    map<array<int,3>, int> vals;
    for (auto &kv : corners) {
        const array<int,3> &pos = kv.first;
        int s = pos[0] * pos[1] * pos[2];
        int ids[3], bits = 0;
        for (int k = 0; k < 3; k++) {
            ids[k] = pairOf[kv.second[k]].first;
            bits += pairOf[kv.second[k]].second;
        }
        vals[pos] = s * permSign(ids) * ((bits % 2) ? -1 : 1);
    }

    int posCnt = 0;
    for (auto &kv : vals)
        if (kv.second == 1) posCnt++;
    int odd = (posCnt <= 1) ? 1 : -1;

    for (auto &kv : vals) {
        if (kv.second == odd) {
            array<char,3> col = corners[kv.first];
            sort(col.begin(), col.end());
            cout << col[0] << col[1] << col[2] << endl;
            return 0;
        }
    }
    return 0;
}