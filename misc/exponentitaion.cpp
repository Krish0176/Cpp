#include <iostream>
using namespace std;
int fastexpo(int base,int expo){
    while (expo>0)
    {
        if(expo&1) 
        res = ((res*base)%MOD);
        expo = (expo>>1);
        base = ((base*base)%MOD);
    }
    return res;
    
}
int main() {
    int base =2,expo=10
    // Your code goes here
    cout << (expo >> 2);   
    return 0;
}