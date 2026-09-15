#include <iostream>
using namespace std;
class cpy{
public:
    int x;
    cpy(int mark){
        this->x = mark;
    }
    cpy(const cpy &obj){
        x = obj.x;
    }
    void print(){
        cout << x;
    }
};


int main() {
    cpy s1(122);
    cpy s2(s1);
    s2.print();
    
    return 0;
}