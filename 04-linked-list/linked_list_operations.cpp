//
// Created by Mohsen on 9/11/2026.
//
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Print all elements.
void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

// Return the number of nodes.
int getLength(Node* head) {
    int length = 0;
    Node* current = head;

    while (current != nullptr) {
        length++;
        current = current->next;
    }

    return length;
}

// Search for a value.
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

// Delete the first node containing the target value.
void deleteValue(Node*& head, int target) {
    if (head == nullptr) {
        return;
    }

    // If the head contains the target.
    if (head->data == target) {
        Node* nodeToDelete = head;
        head = head->next;

        delete nodeToDelete;
        return;
    }

    Node* current = head;

    while (
        current->next != nullptr &&
        current->next->data != target
    ) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* nodeToDelete = current->next;

        current->next = nodeToDelete->next;

        delete nodeToDelete;
    }
}

// Delete all nodes and free memory.
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* nodeToDelete = head;
        head = head->next;

        delete nodeToDelete;
    }
}

int main() {
    Node* head = nullptr;

    Node* first = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};
    Node* fourth = new Node{40, nullptr};

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Original list: ";
    printList(head);

    cout << "Length: "
         << getLength(head) << endl;

    cout << "Contains 30: "
         << contains(head, 30) << endl;

    deleteValue(head, 20);

    cout << "After deleting 20: ";
    printList(head);

    deleteValue(head, 10);

    cout << "After deleting 10: ";
    printList(head);

    deleteList(head);

    cout << "After deleting the entire list: ";
    printList(head);

    return 0;
}