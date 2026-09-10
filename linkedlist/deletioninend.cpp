#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next; // Added missing semicolon

    // Corrected constructor to initialize data and next pointer
    Node(int value) {
        data = value;
        next = nullptr; 
    }

    // Function to insert a node at the end
    Node* insertAtEnd(Node* head, int value) {
        Node* newNode = new Node(value);
        
        // If the list is empty, the new node becomes the head
        if (head == nullptr) {
            return newNode;
        }
        
        Node* curr = head;
        // Fixed the loop condition to check the next pointer
        while (curr->next != nullptr) { 
            curr = curr->next;
        }
        
        // Link the last node to the new node
        curr->next = newNode; 
        return head; // Added missing semicolon
    }
    Node* deleteatend(Node *head){
    if(head == NULL) return NULL;

    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;

    while(curr->next->next !=NULL){
        curr = curr->next;
    }

    Node *temp = curr->next;
    curr->next = NULL;
    delete temp;
    return head;
}

};

// Helper function to print the list and verify it works
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Correctly initialize an empty list
    Node* head = nullptr; 
    Node dummy(0); // Temporary object to call the class method

    // Insert elements
    head = dummy.insertAtEnd(head, 10);
    head = dummy.insertAtEnd(head, 20);
    head = dummy.insertAtEnd(head, 30);

    // Print results
    printList(head);
    head = head->deleteatend(head);
  
    printList(head);
    return 0;
}
