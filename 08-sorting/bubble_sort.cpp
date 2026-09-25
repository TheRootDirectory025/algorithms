#include <iostream>
#include <vector>

using namespace std;

// Sort the vector using Bubble Sort.
void bubbleSort(vector<int>& numbers) {
    int n = numbers.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
                swapped = true;
            }
        }

        // Stop if the array is already sorted.
        if (!swapped) {
            break;
        }
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
        64, 34, 25, 12, 22, 11, 90
    };

    cout << "Before sorting: ";
    printVector(numbers);

    bubbleSort(numbers);

    cout << "After sorting: ";
    printVector(numbers);

    return 0;
}