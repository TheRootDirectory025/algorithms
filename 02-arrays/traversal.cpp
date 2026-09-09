//
// Created by Mohsen on 9/9/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// Print all elements using index.
void printWithIndex(const vector<int>& numbers) {
    for (int i = 0; i < numbers.size(); i++) {
        cout << "Index " << i
             << ": " << numbers[i] << endl;
    }
}

// Print all elements using range-based for loop.
void printElements(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;
}

// Find the maximum element.
int findMaximum(const vector<int>& numbers) {
    int maximum = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    return maximum;
}

// Find the minimum element.
int findMinimum(const vector<int>& numbers) {
    int minimum = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    return minimum;
}

// Update an element at a specific index.
void updateElement(vector<int>& numbers, int index, int value) {
    if (index >= 0 && index < numbers.size()) {
        numbers[index] = value;
    }
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements with index:" << endl;
    printWithIndex(numbers);

    cout << endl;

    cout << "Elements:" << endl;
    printElements(numbers);

    cout << "Maximum: "
         << findMaximum(numbers) << endl;

    cout << "Minimum: "
         << findMinimum(numbers) << endl;

    updateElement(numbers, 2, 100);

    cout << "After update:" << endl;
    printElements(numbers);

    return 0;
}