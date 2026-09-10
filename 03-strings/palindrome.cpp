//
// Created by Mohsen on 9/10/2026.
//
#include <iostream>
#include <string>

using namespace std;

// Check whether a string is a palindrome.
bool isPalindrome(const string& text) {
    int left = 0;
    int right = text.size() - 1;

    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string first = "level";
    string second = "hello";
    string third = "radar";

    cout << first << ": "
         << isPalindrome(first) << endl;

    cout << second << ": "
         << isPalindrome(second) << endl;

    cout << third << ": "
         << isPalindrome(third) << endl;

    return 0;
}