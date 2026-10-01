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
void deletion(Node*& head,int value){
    if(head = nullptr){
        cout << "Linked list is empty";
        return;
    }
   if (head->data = value)
   {
    Node* todelete = head;
    head = head->next;
    delete todelete;
    return;   /* code */
   }
   
    Node* temp = head;
    while(temp->next != nullptr && temp->next->data != value){
            temp = temp->next;
    }
    if(temp->next == nullptr){
        cout << "not found";
        return; 
    }
    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

}

int main() {
    // Your code goes here
    Node* newnode = new Node(5);
    Node* newnode2 = new Node(10);
    Node* head = nullptr;

    deletion(head,5);
    return 0;
}