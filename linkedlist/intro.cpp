#include <iostream>
using namespace std;
class Node{
public:
    int data;
    string x;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
    Node(string k){
        this->x = k;
        this->next = NULL;
    }
};


int main() {
    Node *first = new Node(1); //Dyanamic Node
    Node *second = new Node("Hello"); 
    Node *third = new Node(3);
    first->next = second;
    second->next = third;
    third->next = NULL;
    
    cout << "FirstD: " << first->data << "\n";
    cout << "secondD: " << second->x<< "\n";
    cout << "thirdD: " << third->data << "\n";
return 0;
}