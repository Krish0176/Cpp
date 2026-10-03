
class myStack {
    int *arr;
    int top;
    int n;

public:

    myStack(int n) {
        this->n = n;
        arr = new int[n];
        top = -1;
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        return false;
    }

    bool isFull() {
        if(top == n - 1) {
            return true;
        }
        return false;
    }

    void push(int x) {
        if(top == n - 1) {
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if(top == -1) {
            return;
        }

        top--;
    }

    int peek() {
        if(top == -1) {
            return -1;
        }

        return arr[top];
    }
};