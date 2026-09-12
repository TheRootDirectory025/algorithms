//
// Created by Mohsen on 9/12/2026.
//
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Count the frequency of every number.
unordered_map<int, int> countFrequency(
    const vector<int>& numbers
) {
    unordered_map<int, int> frequency;

    for (int number : numbers) {
        frequency[number]++;
    }

    return frequency;
}

// Find the number that appears most frequently.
int findMostFrequent(const vector<int>& numbers) {
    if (numbers.empty()) {
        return -1;
    }

    unordered_map<int, int> frequency =
        countFrequency(numbers);

    int mostFrequent = numbers[0];

    for (const auto& item : frequency) {
        if (
            item.second >
            frequency[mostFrequent]
        ) {
            mostFrequent = item.first;
        }
    }

    return mostFrequent;
}

// Count how many times a target appears.
int countOccurrences(
    const vector<int>& numbers,
    int target
) {
    unordered_map<int, int> frequency =
        countFrequency(numbers);

    if (frequency.find(target) != frequency.end()) {
        return frequency[target];
    }

    return 0;
}

int main() {
    vector<int> numbers = {
        2, 4, 2, 7, 4, 2, 9, 4
    };

    unordered_map<int, int> frequency =
        countFrequency(numbers);

    cout << "Frequencies:" << endl;

    for (const auto& item : frequency) {
        cout << item.first
             << ": " << item.second << endl;
    }

    cout << endl;

    cout << "Most frequent number: "
         << findMostFrequent(numbers) << endl;

    cout << "Occurrences of 4: "
         << countOccurrences(numbers, 4) << endl;

    cout << "Occurrences of 10: "
         << countOccurrences(numbers, 10) << endl;

    return 0;
}