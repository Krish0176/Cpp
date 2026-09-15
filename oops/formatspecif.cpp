#include <iostream>
using namespace std;
 
class xyz {
private:
    int age;

public:
    string name;

    xyz(int age,string name){
        this->age = age;
        this->name = name;
    }
    void display(){
        cout << age;
    }
};



int main() {
    // Your code goes here
    xyz a(15,"krish");
    a.display();
    return 0;
}