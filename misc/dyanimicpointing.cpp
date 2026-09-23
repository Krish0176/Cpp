#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int *a = new int(100);
    cout << *a;
    delete a;
    a = nullptr;
    
    return 0;
}