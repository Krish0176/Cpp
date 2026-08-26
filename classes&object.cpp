#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    
    void display(){
        cout << "name: " <<name << "\n";
        cout << "age:" <<age << "\n";
    }
};

int main(){
    Student s1;
    s1.name = "Krishna";
    s1.age = 20;
    s1.display();
    return 0;

}