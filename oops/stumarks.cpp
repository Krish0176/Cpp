#include <iostream>
using namespace std;

class Student{
public:
    int marks;
    Student(int marks){
        this->marks = marks;
    }
    void print(){
        cout << marks;
    }
};

int main() {
    // Your code goes here
    int a,b,c;
    cin >> a >> b >> c;
    Student s1(a), s2(b), s3(c);
    s1.print();
    s2.print();
    s3.print();
    return 0;
}