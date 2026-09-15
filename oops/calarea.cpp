#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    int area;
    Rectangle(int length,int breadth){
        this->length = length;
        this->breadth = breadth;
        calarea();
    }
    void calarea(){
        area = length*(breadth);        
    }
    void print(){
        cout << "Area: " << area;
    }
};
int main(){
    int a = 100;
    int b= 15;
    Rectangle A(a,b);
    A.print();
    return 0;
}