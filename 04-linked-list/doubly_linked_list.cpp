//
// Created by Mohsen bagheri on 9/10/2026.
//
#include <iostream>

using namespace std;

// A node stores a value,
// a pointer to the previous node,
// and a pointer to the next node.
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Print the list from left to right.
void printForward(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

// Print the list from right to left.
void printBackward(Node* tail) {
    Node* current = tail;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }

    cout << endl;
}

// Insert a new node at the end.
void insertAtEnd(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = tail;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Insert a new node at the beginning.
void insertAtBeginning(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    head = newNode;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);

    cout << "Forward: ";
    printForward(head);


    cout << "Backward: ";
    printBackward(tail);

    insertAtBeginning(head, tail, 5);

    cout << "After inserting at beginning:" << endl;

    cout << "Forward: ";
    printForward(head);

    cout << "Backward: ";
    printBackward(tail);

    return 0;
}