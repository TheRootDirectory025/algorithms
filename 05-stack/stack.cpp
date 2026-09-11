//
// Created by Mohsen on 9/11/2026.
//
#include <iostream>
#include <stack>

using namespace std;

// Print and remove all elements from the stack.
void printStack(stack<int> numbers) {
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }

    cout << endl;
}

int main() {
    stack<int> numbers;

    // Add elements to the stack.
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << "Top element: "
         << numbers.top() << endl;

    cout << "Stack size: "
         << numbers.size() << endl;

    cout << "Stack elements: ";
    printStack(numbers);

    // Remove the top element.
    numbers.pop();

    cout << "After pop, top element: "
         << numbers.top() << endl;

    // Check whether the stack is empty.
    cout << "Is stack empty: "
         << numbers.empty() << endl;

    return 0;
}