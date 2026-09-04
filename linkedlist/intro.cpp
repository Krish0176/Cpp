#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};


int main() {
    Node *first = new Node(1); //Dyanamic Node
    Node *second = new Node(2); 
    Node *third = new Node(3);
    first->next = second;
    second->next = third;
    third->next = NULL;
    
    cout << "FirstD: " << first->data << "\n";
    cout << "secondD: " << second->data << "\n";
    cout << "thirdD: " << third->data << "\n";
return 0;
}