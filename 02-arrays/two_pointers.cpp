//
// Created by Mohsen on 9/9/2026.
//
#include <iostream>
#include <vector>

using namespace std;

// Find two numbers whose sum equals the target.
// The array must be sorted.
bool hasPairWithSum(
    const vector<int>& numbers,
    int target
) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            return true;
        }

        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}

// Find two numbers whose sum equals the target
// and return their indices.
vector<int> findPair(
    const vector<int>& numbers,
    int target
) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            return {left, right};
        }

        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> numbers = {1, 2, 4, 6, 8, 10};
    int target = 14;

    cout << "Has pair: "
         << hasPairWithSum(numbers, target) << endl;

    vector<int> result = findPair(numbers, target);

    if (result[0] != -1) {
        cout << "Pair indices: "
             << result[0] << " and "
             << result[1] << endl;

        cout << "Pair values: "
             << numbers[result[0]] << " and "
             << numbers[result[1]] << endl;
    }

    return 0;
}