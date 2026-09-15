#include <iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int marks){
        this->marks = marks;
        this->marks = 50;
        show();
    }
    void show(){
        cout << marks;
    }
};


int main() {
    // Your code goes here
    Student s1(0);
    return 0;
}