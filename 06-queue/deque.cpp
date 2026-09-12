//
// Created by Mohsen on 9/12/2026.
//
#include <iostream>
#include <deque>

using namespace std;

// Print all elements in the deque.
void printDeque(const deque<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;
}

int main() {
    deque<int> numbers;

    // Add elements to the back.
    numbers.push_back(20);
    numbers.push_back(30);

    // Add elements to the front.
    numbers.push_front(10);
    numbers.push_front(5);

    cout << "Deque: ";
    printDeque(numbers);

    cout << "Front element: "
         << numbers.front() << endl;

    cout << "Back element: "
         << numbers.back() << endl;

    // Remove from the front.
    numbers.pop_front();

    cout << "After pop_front: ";
    printDeque(numbers);

    // Remove from the back.
    numbers.pop_back();

    cout << "After pop_back: ";
    printDeque(numbers);

    // Access an element by index.
    cout << "Element at index 1: "
         << numbers[1] << endl;

    return 0;
}