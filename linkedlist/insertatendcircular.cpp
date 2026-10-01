/* Structure of Circular Linked List node
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertAtEnd(Node* head, int key) {
                Node* newnode = new Node(key);

        if(head == nullptr){
            newnode->next = newnode;
            return newnode;
        }
        
        
        Node* temp =head;
        while(temp->next != head){
            temp = temp->next;
        }
        
        newnode->data=key;
        newnode->next = temp->next;
        temp->next = newnode;
        
        return head;
    }
};