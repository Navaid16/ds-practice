#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;
    public:
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    bool isFull() {
        return top == size - 1;
    }
    bool isEmpty() {
        return top == size - 1;
    }

    void push(int x) {
        if(isFull()) {
            cout << "stack overflow " << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed into stack" << endl;
    }
    int pop() {
        if(isEmpty()) {
            cout <<"stack underflow " << endl;
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }
    
    int peek() {
        if(isEmpty()) {
            cout <<"stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if(isEmpty()) {
            cout << "stack is empty " << endl;
            return;
        }
        cout << "stack elements: ";
        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Stack() {
        delete[] arr;
    }

};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    s.display();
    cout << "popped element: " << s.pop() << endl;
    cout << "top element: " << s.peek() << endl;

    s.display();

    return 0;
}