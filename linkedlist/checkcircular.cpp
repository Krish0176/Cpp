class Solution {
  public:
    bool isCircular(Node *head) {
        
        if(head == nullptr)
            return false;

        Node* temp = head;

        while(temp != nullptr && temp->next != head) {
            temp = temp->next;
        }

        if(temp != nullptr && temp->next == head)
            return true;

        return false;
    }
};