#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {       
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
void insert(Node*& head, int value) {       
    Node* newNode = new Node{value, nullptr};

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

// Print all nodes
void print(Node* head) {   
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Free memory
void freeList(Node*& head) {  
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
int main() {
    Node* head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    print(head);

    freeList(head);
    return 0;
}

