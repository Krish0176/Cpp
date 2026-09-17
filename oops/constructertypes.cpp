#include <iostream>
using namespace std;

class area{
public:
    int len;
    int breadt;
    area(){
        len = 0;
    }
    area(int len){
        this->len = len;
    }
    area(int len,int breadt){
        this->len = len;
        this->breadt = breadt;
    }

};





int main() {
    // Your code goes here
    area a1;
    area a2(15);
    area a3(15,30);
    return 0;
}