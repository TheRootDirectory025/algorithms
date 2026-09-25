//
// Created by mohsen on 9/25/26.
//
#include <iostream>
#include <vector>

using namespace std;

// Sort the vector using Insertion Sort.
void insertionSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 1; i < n; i++) {
        int current = numbers[i];
        int j = i - 1;

        // Move larger elements one position to the right.
        while (j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        // Insert the current element in its correct position.
        numbers[j + 1] = current;
    }
}

// Print all elements.
void printVector(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;
}

int main() {
    vector<int> numbers = {
        12, 11, 13, 5, 6
    };

    cout << "Before sorting: ";
    printVector(numbers);

    insertionSort(numbers);

    cout << "After sorting: ";
    printVector(numbers);

    return 0;
}
