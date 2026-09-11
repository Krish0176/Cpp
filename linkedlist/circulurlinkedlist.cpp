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

    void Printlist(Node *head){
        cout << "Linked List ";

        Node *curr = head;

        do{
            cout << curr->data << " ";
            curr = curr->next;
        }while(curr !=head);
        cout << "\n";
    }
};
int main() {
    // Your code goes here
  Node *head = new Node(11);
  Node *second = new  Node(12);
  Node *third = new Node(13);
  
  head->next = second;
  second->next = third;
  third->next = head;

  head->Printlist(head);
    return 0;
}