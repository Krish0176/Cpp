#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
void insertion(Node*& head,int value){
   Node* newnode = new Node(value);
   newnode->next = head;
    head = newnode;
}
void insertionatend(Node*& head,int value){
   Node* newnode = new Node(value);
   if(head == nullptr){
    newnode->next = head;
    head = newnode;

   }
   Node* temp = head;
   while (temp->next != nullptr)
   {
    temp = temp->next;
    /* code */
   }
   temp->next = newnode;
   
}


void display(Node*& head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    // Your code goes here
    Node* head = new Node(10);
    insertion(head,20);
    insertion(head,30);
    insertionatend(head,40);
    display(head);
    return 0;
}