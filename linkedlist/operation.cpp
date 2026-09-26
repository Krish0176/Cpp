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
void insertatfirst(Node*& head,int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}
void insert(Node*& head,int value){
    Node* newnode = new Node(value);
    if(head == nullptr){
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next !=nullptr)
    {
        temp = temp->next;
        /* code */
    }
    temp->next = newnode;
    
}
void display(Node*& head){
    Node* temp = head;
    cout << "Linked list value: ";
    while (temp != nullptr)
    {
        cout<< temp->data << " ";
        temp = temp->next;
        /* code */
    }
    
    
}
int main() {
    int n;
    cout << "size of linked list: ";
    cin >> n;
    int arr[n];
    cout << "array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
        Node* head = nullptr;

    for(int i=0;i<n;i++){
        insert(head,arr[i]);
    }
    //Node* newnode = new Node(value);
    display(head);
    
    return 0;
}