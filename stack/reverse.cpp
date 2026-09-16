#include<iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
   Stack() {
    top = -1;
   }
   void push(int x) {
    arr[++top] = x;
   }
   int pop() {
    return arr[top--];
   }
   bool isEmpty() {
    return top == -1;
   }
};

int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int a[100];
    cout << "enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    Stack s;

    for(int i=0; i<n; i++){
        s.push(a[i]);
    }

    for(int i=0; i<n; i++){
        a[i] = s.pop();
    }

    cout << "reversed array: ";
    for(int i=0; i<n; i++){
       cout << a[i] << " ";
    }
    return 0;
}