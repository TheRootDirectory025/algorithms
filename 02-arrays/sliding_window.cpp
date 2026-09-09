//
// Created by Mohsen on 9/9/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// Find the maximum sum of a subarray
// with exactly k consecutive elements.
int maxWindowSum(const vector<int>& numbers, int k) {
    if (numbers.size() < k || k <= 0) {
        return 0;
    }

    int windowSum = 0;

    // Build the first window.
    for (int i = 0; i < k; i++) {
        windowSum += numbers[i];
    }

    int maximum = windowSum;

    // Slide the window across the array.
    for (int i = k; i < numbers.size(); i++) {
        windowSum += numbers[i];
        windowSum -= numbers[i - k];

        if (windowSum > maximum) {
            maximum = windowSum;
        }
    }

    return maximum;
}

int main() {
    vector<int> numbers = {2, 1, 5, 1, 3, 2};

    int k = 3;

    cout << "Maximum window sum: "
         << maxWindowSum(numbers, k) << endl;

    return 0;
}