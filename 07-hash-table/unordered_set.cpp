//
// Created by Mohsen on 9/12/2026.
//
#include <iostream>
#include <unordered_set>

using namespace std;

// Add a number to the set.
void addNumber(unordered_set<int>& numbers, int value) {
    numbers.insert(value);
}

// Check whether a number exists.
bool containsNumber(
    const unordered_set<int>& numbers,
    int value
) {
    return numbers.find(value) != numbers.end();
}

// Remove a number from the set.
void removeNumber(unordered_set<int>& numbers, int value) {
    numbers.erase(value);
}

// Print all numbers in the set.
void printSet(const unordered_set<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;
}

int main() {
    unordered_set<int> numbers;

    addNumber(numbers, 10);
    addNumber(numbers, 20);
    addNumber(numbers, 30);

    // Duplicate values are ignored.
    addNumber(numbers, 20);

    cout << "Set: ";
    printSet(numbers);

    cout << "Contains 20: "
         << containsNumber(numbers, 20) << endl;

    cout << "Contains 50: "
         << containsNumber(numbers, 50) << endl;

    removeNumber(numbers, 20);

    cout << "After removing 20: ";
    printSet(numbers);

    return 0;
}