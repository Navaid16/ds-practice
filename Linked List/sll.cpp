#include<iostream>
using namespace std;

// create node
class Node {
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// create LL using user input
Node* createList(int n) {
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 1; i <= n; i++) {
        int value;
        cout << "Enter Value " << i << ": ";
        cin >> value;

        Node* newNode = new Node(value);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// display LL
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// count no. of nodes
int length(Node* head){
    int count =0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// reverse a LL
Node* reverseList(Node* head){
    Node* previous = NULL;
    Node* current = head;
    while(current != NULL){
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

// middle point of LL
void findMiddle(Node* head) {
    if(head == NULL){
        cout << "Linked list is empty" << endl;
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle element = " << slow->data <<endl;
}

int main(){
    int n;
    
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = createList(n);

    cout << "Linked List: ";
    display(head);

    cout << "Number of nodes = " << length(head) << endl;

    head = reverseList(head);
    display(head);

    findMiddle(head);

    return 0;

}