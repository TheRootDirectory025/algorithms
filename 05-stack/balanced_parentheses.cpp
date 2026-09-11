//
// Created by Mohsen on 9/11/2026.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Check whether all brackets are balanced.
bool isBalanced(const string& text) {
    stack<char> brackets;

    for (char character : text) {
        // Opening brackets are pushed onto the stack.
        if (
            character == '(' ||
            character == '[' ||
            character == '{'
        ) {
            brackets.push(character);
        }

        // Closing brackets must match the top bracket.
        else if (
            character == ')' ||
            character == ']' ||
            character == '}'
        ) {
            if (brackets.empty()) {
                return false;
            }

            char top = brackets.top();

            if (
                (character == ')' && top != '(') ||
                (character == ']' && top != '[') ||
                (character == '}' && top != '{')
            ) {
                return false;
            }

            brackets.pop();
        }
    }

    return brackets.empty();
}

int main() {
    string first = "({[]})";
    string second = "([)]";
    string third = "((()))";
    string fourth = "(((";

    cout << first << ": "
         << isBalanced(first) << endl;

    cout << second << ": "
         << isBalanced(second) << endl;

    cout << third << ": "
         << isBalanced(third) << endl;

    cout << fourth << ": "
         << isBalanced(fourth) << endl;

    return 0;
}