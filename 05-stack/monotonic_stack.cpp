//
// Created by Mohsen on 9/11/2026.
//
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Find the next greater element for every number.
vector<int> nextGreaterElements(const vector<int>& numbers) {
    vector<int> result(numbers.size(), -1);
    stack<int> numbersStack;

    for (int i = numbers.size() - 1; i >= 0; i--) {
        // Remove elements that cannot be the answer.
        while (
            !numbersStack.empty() &&
            numbersStack.top() <= numbers[i]
        ) {
            numbersStack.pop();
        }

        // The top element is the next greater element.
        if (!numbersStack.empty()) {
            result[i] = numbersStack.top();
        }

        numbersStack.push(numbers[i]);
    }

    return result;
}

int main() {
    vector<int> numbers = {2, 1, 5, 3, 4};

    vector<int> result = nextGreaterElements(numbers);

    cout << "Next greater elements: ";

    for (int number : result) {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}