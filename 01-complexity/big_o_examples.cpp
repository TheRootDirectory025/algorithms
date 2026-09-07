//
// Created by Mohsen on 9/8/2026.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// O(1) Time | O(1) Space
int getLastElement(const vector<int>& numbers) {
    return numbers[numbers.size() - 1];
}

// O(n) Time | O(1) Space
int findMinimum(const vector<int>& numbers) {
    int minimum = numbers[0];

    for (int number : numbers) {
        if (number < minimum) {
            minimum = number;
        }
    }

    return minimum;
}

// O(n) Time | O(n) Space
vector<int> getEvenNumbers(const vector<int>& numbers) {
    vector<int> result;

    for (int number : numbers) {
        if (number % 2 == 0) {
            result.push_back(number);
        }
    }

    return result;
}

// O(n^2) Time | O(1) Space
bool hasDuplicate(const vector<int>& numbers) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[i] == numbers[j]) {
                return true;
            }
        }
    }

    return false;
}

// O(n log n) Time | O(1) Auxiliary Space
void sortNumbers(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

// O(log n) Time | O(1) Space
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
    vector<int> numbers = {2, 4, 6, 8, 10};

    cout << "Last element: "
         << getLastElement(numbers) << endl;

    cout << "Minimum: "
         << findMinimum(numbers) << endl;

    vector<int> evenNumbers = getEvenNumbers(numbers);

    cout << "Even numbers: ";

    for (int number : evenNumbers) {
        cout << number << " ";
    }

    cout << endl;

    cout << "Has duplicate: "
         << hasDuplicate(numbers) << endl;

    sortNumbers(numbers);

    cout << "Binary search result: "
         << binarySearch(numbers, 6) << endl;

    return 0;
}