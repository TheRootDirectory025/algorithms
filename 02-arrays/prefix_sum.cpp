//
// Created by Mohsen on 9/9/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// Build the prefix sum array.
vector<int> buildPrefixSum(const vector<int>& numbers) {
    vector<int> prefix(numbers.size());

    if (numbers.empty()) {
        return prefix;
    }

    prefix[0] = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        prefix[i] = prefix[i - 1] + numbers[i];
    }

    return prefix;
}

// Return the sum of elements from left to right.
int rangeSum(
    const vector<int>& prefix,
    int left,
    int right
) {
    if (left == 0) {
        return prefix[right];
    }

    return prefix[right] - prefix[left - 1];
}

int main() {
    vector<int> numbers = {2, 4, 6, 8, 10};

    vector<int> prefix = buildPrefixSum(numbers);

    cout << "Prefix sum: ";

    for (int number : prefix) {
        cout << number << " ";
    }

    cout << endl;

    cout << "Sum from index 1 to 3: "
         << rangeSum(prefix, 1, 3) << endl;

    cout << "Sum from index 2 to 4: "
         << rangeSum(prefix, 2, 4) << endl;

    return 0;
}