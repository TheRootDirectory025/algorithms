//
// Created by Mohsen on 9/12/2026.
//
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Print and remove all elements from a max-heap.
void printMaxHeap(priority_queue<int> numbers) {
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }

    cout << endl;
}

// Print and remove all elements from a min-heap.
void printMinHeap(
    priority_queue<int, vector<int>, greater<int>> numbers
) {
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }

    cout << endl;
}

int main() {
    // Max-heap
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(40);
    maxHeap.push(20);
    maxHeap.push(30);

    cout << "Max-heap top: "
         << maxHeap.top() << endl;

    cout << "Max-heap order: ";
    printMaxHeap(maxHeap);

    maxHeap.pop();

    cout << "After pop, max-heap top: "
         << maxHeap.top() << endl;

    cout << endl;

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(40);
    minHeap.push(20);
    minHeap.push(30);

    cout << "Min-heap top: "
         << minHeap.top() << endl;

    cout << "Min-heap order: ";
    printMinHeap(minHeap);

    return 0;
}