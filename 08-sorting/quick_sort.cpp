//
// Created by mohsen on 9/25/26.
//
#include <iostream>
#include <vector>

using namespace std;

// Partition the array around a pivot.
int partition(
    vector<int>& numbers,
    int low,
    int high
) {
    int pivot = numbers[high];

    int smallerIndex = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] <= pivot) {
            smallerIndex++;

            swap(
                numbers[smallerIndex],
                numbers[j]
            );
        }
    }

    swap(
        numbers[smallerIndex + 1],
        numbers[high]
    );

    return smallerIndex + 1;
}

// Sort the array using Quick Sort.
void quickSort(
    vector<int>& numbers,
    int low,
    int high
) {
    if (low >= high) {
        return;
    }

    int pivotIndex = partition(
        numbers,
        low,
        high
    );

    quickSort(
        numbers,
        low,
        pivotIndex - 1
    );

    quickSort(
        numbers,
        pivotIndex + 1,
        high
    );
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
        10, 7, 8, 9, 1, 5
    };

    cout << "Before sorting: ";
    printVector(numbers);

    quickSort(
        numbers,
        0,
        numbers.size() - 1
    );

    cout << "After sorting: ";
    printVector(numbers);

    return 0;
}