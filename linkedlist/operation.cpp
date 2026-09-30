#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data= value;
        next = nullptr;
    }

};

void insertatfirst(Node*& head,int value){
    Node* newnode = new Node(value);
    newnode->data = value;
    newnode->next = head;
    head = newnode; 
}
void display(Node*& head){
    Node* temp = head;
    cout << "Elements are: ";

    while(temp != nullptr){
        cout << temp->data <<"\n" ;
        temp = temp->next;
    }

    cout << "\n";
}
void insertionatend(Node*& head,int value){
    Node* newnode = new Node(value);
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
        /* code */
    }
    temp->next = newnode;
    
}
int main() {
    int value;
    cout <<  "Enter a value"<< "\n";
    cin>> value;
    Node* head = nullptr;
    insertatfirst(head,value);
    insertatfirst(head,10);
    insertatfirst(head,20);
    insertionatend(head,40);
    display(head);
        return 0;
}