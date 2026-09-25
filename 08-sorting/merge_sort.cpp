//
// Created by mohsen on 9/25/26.
//
#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted parts of the array.
void merge(
    vector<int>& numbers,
    int left,
    int middle,
    int right
) {
    vector<int> leftPart(
        numbers.begin() + left,
        numbers.begin() + middle + 1
    );

    vector<int> rightPart(
        numbers.begin() + middle + 1,
        numbers.begin() + right + 1
    );

    int i = 0;
    int j = 0;
    int k = left;

    // Compare elements from both parts.
    while (
        i < leftPart.size() &&
        j < rightPart.size()
    ) {
        if (leftPart[i] <= rightPart[j]) {
            numbers[k] = leftPart[i];
            i++;
        } else {
            numbers[k] = rightPart[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from the left part.
    while (i < leftPart.size()) {
        numbers[k] = leftPart[i];

        i++;
        k++;
    }

    // Copy remaining elements from the right part.
    while (j < rightPart.size()) {
        numbers[k] = rightPart[j];

        j++;
        k++;
    }
}

// Divide the array into smaller parts.
void mergeSort(
    vector<int>& numbers,
    int left,
    int right
) {
    if (left >= right) {
        return;
    }

    int middle = left + (right - left) / 2;

    mergeSort(numbers, left, middle);

    mergeSort(numbers, middle + 1, right);

    merge(numbers, left, middle, right);
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
        38, 27, 43, 3, 9, 82, 10
    };

    cout << "Before sorting: ";
    printVector(numbers);

    mergeSort(
        numbers,
        0,
        numbers.size() - 1
    );

    cout << "After sorting: ";
    printVector(numbers);

    return 0;
}