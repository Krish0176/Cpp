#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int x=100;
    int *p = &x;
    int **q = &p;
    **q = 500;
    cout << x;
    return 0;
}