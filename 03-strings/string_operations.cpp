//
// Created by Mohsen on 9/9/2026.
//
#include <iostream>
#include <string>

using namespace std;

// Print every character with its index.
void printCharacters(const string& text) {
    for (int i = 0; i < text.size(); i++) {
        cout << "Index " << i
             << ": " << text[i] << endl;
    }
}

// Count the number of characters.
int getLength(const string& text) {
    return text.size();
}

// Count a specific character.
int countCharacter(const string& text, char target) {
    int count = 0;

    for (char character : text) {
        if (character == target) {
            count++;
        }
    }

    return count;
}

// Reverse the string in-place.
void reverseString(string& text) {
    int left = 0;
    int right = text.size() - 1;

    while (left < right) {
        swap(text[left], text[right]);

        left++;
        right--;
    }
}

int main() {
    string text = "programming";

    cout << "Original string: "
         << text << endl;

    cout << "Length: "
         << getLength(text) << endl;

    cout << endl;

    cout << "Characters:" << endl;
    printCharacters(text);

    cout << endl;

    cout << "Count of 'm': "
         << countCharacter(text, 'm') << endl;

    reverseString(text);

    cout << "Reversed string: "
         << text << endl;

    return 0;
}