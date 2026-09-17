#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int x = 500;
    void *p = &x;
    cout << *(int*)p;
    return 0;
}