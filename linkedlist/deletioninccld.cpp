class Node {
    public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
        // code here
        Node* temp = head;
        while(temp->next !=nullptr){
            if(temp->data == key){
                Node* todelete = temp->next;
                temp->next = todelete->next;
                delete todelete;
            }
            temp = temp->next;
        }
        return head;
        
    }
};