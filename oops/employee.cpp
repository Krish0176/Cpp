#include <iostream>
using namespace std;
class employee{
public:
    int id;
    string name;
    int salary;
    employee(int id,string name,int salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void print(){
        cout << id << name << salary;
    }
};
int main() {
    employee A(12,"Krish",122000);
    A.print();
    return 0;
}