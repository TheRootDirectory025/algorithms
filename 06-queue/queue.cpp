//
// Created by Mohsen on 9/11/2026.
//
#include <iostream>
#include <queue>

using namespace std;

// Print and remove all elements from the queue.
void printQueue(queue<int> numbers) {
    while (!numbers.empty()) {
        cout << numbers.front() << " ";
        numbers.pop();
    }

    cout << endl;
}

int main() {
    queue<int> numbers;

    // Add elements to the back.
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << "Front element: "
         << numbers.front() << endl;

    cout << "Back element: "
         << numbers.back() << endl;

    cout << "Queue size: "
         << numbers.size() << endl;

    cout << "Queue elements: ";
    printQueue(numbers);

    // Remove the front element.
    numbers.pop();

    cout << "After pop, front element: "
         << numbers.front() << endl;

    cout << "Is queue empty: "
         << numbers.empty() << endl;

    return 0;
}