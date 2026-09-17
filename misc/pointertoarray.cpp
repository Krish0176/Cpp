#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for(int i=0;i<=4;i++){
        cout << *(ptr+i);
    }



    return 0;
}   