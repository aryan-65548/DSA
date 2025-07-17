#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head != nullptr) {
        head->prev = newNode;
        newNode->next = head;
        
    }

    head = newNode;
}
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
void deleteNode(Node*& head, int val) {
    Node* temp = head;

    while (temp && temp->data != val)
        temp = temp->next;

    if (!temp) {
        cout << "Node not found\n";
        return;
    }

    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;  // deleted node was head

    if (temp->next)
        temp->next->prev = temp->prev;

    delete temp;
}
void printForward(Node* head) {
    cout << "Forward: ";
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void printBackward(Node* head) {
    if (!head) return;

    // Move to tail
    while (head->next)
        head = head->next;

    cout << "Backward: ";
    while (head) {
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtHead(head, 5);

    printForward(head);    
    printBackward(head);   

    deleteNode(head, 20);
    printForward(head);    

    deleteNode(head, 5);   
    printForward(head);    

    return 0;
}
// This code implements a doubly linked list with functions to insert at head and tail,
// delete a node, and print the list in both forward and backward directions.
