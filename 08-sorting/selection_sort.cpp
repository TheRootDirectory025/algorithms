//
// Created by mohsen on 9/25/26.
//
#include <iostream>
#include <vector>

using namespace std;

// Sort the vector using Selection Sort.
void selectionSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        int minimumIndex = i;

        // Find the smallest element in the unsorted part.
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[minimumIndex]) {
                minimumIndex = j;
            }
        }

        // Move the smallest element to its correct position.
        swap(numbers[i], numbers[minimumIndex]);
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
        64, 25, 12, 22, 11
    };

    cout << "Before sorting: ";
    printVector(numbers);

    selectionSort(numbers);

    cout << "After sorting: ";
    printVector(numbers);

    return 0;
}