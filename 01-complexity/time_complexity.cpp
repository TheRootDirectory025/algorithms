//
// Created by Mohsen on 9/6/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// O(1)
// The number of operations does not depend on the input size.
int getFirstElement(const vector<int>& numbers) {
    return numbers[0];
}

// O(n)
// We may need to visit every element once.
int calculateSum(const vector<int>& numbers) {
    int sum = 0;

    for (int number : numbers) {
        sum += number;
    }

    return sum;
}

// O(n)
// Linear search checks elements one by one.
bool containsValue(const vector<int>& numbers, int target) {
    for (int number : numbers) {
        if (number == target) {
            return true;
        }
    }

    return false;
}

// O(n^2)
// For every element, we iterate through the entire vector again.
void printAllPairs(const vector<int>& numbers) {
    for (int first : numbers) {
        for (int second : numbers) {
            cout << "(" << first << ", " << second << ")" << endl;
        }
    }
}

// O(log n)
// Binary search reduces the search space by half in every step.
int binarySearch(const vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            return middle;
        }

        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {1, 3, 5, 7, 9};

    cout << "First element: "
         << getFirstElement(numbers) << endl;

    cout << "Sum: "
         << calculateSum(numbers) << endl;

    cout << "Contains 5: "
         << containsValue(numbers, 5) << endl;

    cout << "Binary search result: "
         << binarySearch(numbers, 7) << endl;

    return 0;
}