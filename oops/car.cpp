#include <iostream>
#include <string>
using namespace std;
class Car{
public:
    string brand;
    int price;
    Car(string brand,int price){
        this->brand = brand;
        this->price = price;
    }
    void print(){
        cout << "Brand: " << brand << "\n" << "Price: " << price;
    }
};
int main() {
    Car A("BMW", 5000000);
    A.print();
    return 0;
}