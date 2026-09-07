//
// Created by Mohsen on 9/7/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// O(1) Space
// We only use a fixed number of variables.
int calculateSum(const vector<int>& numbers) {
    int sum = 0;

    for (int number : numbers) {
        sum += number;
    }

    return sum;
}

// O(n) Space
// We create a new vector whose size depends on the input size.
vector<int> createCopy(const vector<int>& numbers) {
    vector<int> copy;

    for (int number : numbers) {
        copy.push_back(number);
    }

    return copy;
}

// O(n) Space
// The function creates a vector containing n elements.
vector<int> createSquares(const vector<int>& numbers) {
    vector<int> squares;

    for (int number : numbers) {
        squares.push_back(number * number);
    }

    return squares;
}

// O(1) Space
// No additional data structure grows with the input size.
int findMaximum(const vector<int>& numbers) {
    int maximum = numbers[0];

    for (int number : numbers) {
        if (number > maximum) {
            maximum = number;
        }
    }

    return maximum;
}

int main() {
    vector<int> numbers = {2, 4, 6, 8, 10};

    cout << "Sum: "
         << calculateSum(numbers) << endl;

    vector<int> copy = createCopy(numbers);

    cout << "Copy size: "
         << copy.size() << endl;

    vector<int> squares = createSquares(numbers);

    cout << "Squares: ";

    for (int number : squares) {
        cout << number << " ";
    }

    cout << endl;

    cout << "Maximum: "
         << findMaximum(numbers) << endl;

    return 0;
}