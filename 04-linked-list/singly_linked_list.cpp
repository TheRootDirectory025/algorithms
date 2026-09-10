//
// Created by Mohsen on 9/10/2026.
//
#include <iostream>

using namespace std;

// A node stores a value and a pointer to the next node.
struct Node {
    int data;
    Node* next;
};

// Print all nodes in the linked list.
void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

// Add a new node to the beginning of the list.
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

// Add a new node to the end of the list.
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

// Search for a value in the linked list.
bool contains(Node* head, int target) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == target) {
            return true;
        }

        current = current->next;
    }

    return false;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Original list: ";
    printList(head);

    insertAtBeginning(head, 5);

    cout << "After inserting at beginning: ";
    printList(head);

    insertAtEnd(head, 40);

    cout << "After inserting at end: ";
    printList(head);

    cout << "Contains 30: "
         << contains(head, 30) << endl;

    cout << "Contains 100: "
         << contains(head, 100) << endl;

    return 0;
}