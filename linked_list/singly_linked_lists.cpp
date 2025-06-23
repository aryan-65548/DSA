#include <iostream>
using namespace std;

struct Node {       // Node structure for singly linked list
    int data;
    Node* next;
};
void insert(Node*& head, int value) {       // Function to insert a new node at the end of the list
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

void print(Node* head) {   // Print all nodes
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void freeList(Node*& head) {  // Free memory
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
