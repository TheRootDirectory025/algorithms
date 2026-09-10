#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// Count the frequency of each character.
unordered_map<char, int> countCharacters(const string& text) {
    unordered_map<char, int> frequency;

    for (char character : text) {
        frequency[character]++;
    }

    return frequency;
}

// Count the frequency of each number.
unordered_map<int, int> countNumbers(const vector<int>& numbers) {
    unordered_map<int, int> frequency;

    for (int number : numbers) {
        frequency[number]++;
    }

    return frequency;
}

int main() {
    string text = "programming";

    unordered_map<char, int> characterFrequency =
        countCharacters(text);

    cout << "Character frequencies:" << endl;

    for (const auto& item : characterFrequency) {
        cout << item.first
             << ": " << item.second << endl;
    }

    cout << endl;

    vector<int> numbers = {1, 2, 2, 3, 1, 4, 2, 3};

    unordered_map<int, int> numberFrequency =
        countNumbers(numbers);

    cout << "Number frequencies:" << endl;

    for (const auto& item : numberFrequency) {
        cout << item.first
             << ": " << item.second << endl;
    }

    return 0;
}