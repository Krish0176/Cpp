#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next =  nullptr;
        prev= nullptr;
    }
    
    
};





int main() {
    Node *head = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);

    head->next = second;
    second->next = third;

    second->prev = head;
    third->prev = second;

    Node *curr =head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
        /* code */
    }
     curr = third;

    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    

    return 0;
}