#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    Stack(int cap)
    {
        capacity = cap;
        top = -1;
        arr = new int[cap];
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is already full!\n";
            return;
        }

        top++;
        arr[top] = value;
        cout << "Stack was pushed successfully\n";
    }

    int peak()
    {
        if (top == -1)
        {
            cout << "Stack empty!";
            return -1;
        }
        cout << "Current top elemnt= ";
        return arr[top];
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return -1;
        }

        int val = arr[top];
        top--;
        return val;
    }

    
};

int main()
{
    Stack s(3);

    s.push(10);
    s.push(20);
    s.push(40);
    s.push(50);

    cout << s.peak();
    return 0;
}