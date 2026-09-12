//
// Created by Mohsen on 9/12/2026.
//
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Add or update a key-value pair.
void addStudent(
    unordered_map<string, int>& students,
    const string& name,
    int score
) {
    students[name] = score;
}

// Find the score of a student.
int getScore(
    const unordered_map<string, int>& students,
    const string& name
) {
    auto it = students.find(name);

    if (it != students.end()) {
        return it->second;
    }

    return -1;
}

// Check whether a key exists.
bool containsStudent(
    const unordered_map<string, int>& students,
    const string& name
) {
    return students.find(name) != students.end();
}

// Remove a student.
void removeStudent(
    unordered_map<string, int>& students,
    const string& name
) {
    students.erase(name);
}

int main() {
    unordered_map<string, int> students;

    addStudent(students, "Ali", 18);
    addStudent(students, "Sara", 20);
    addStudent(students, "Reza", 16);

    cout << "Sara's score: "
         << getScore(students, "Sara") << endl;

    cout << "Contains Ali: "
         << containsStudent(students, "Ali") << endl;

    cout << "Contains Mohsen: "
         << containsStudent(students, "Mohsen") << endl;

    removeStudent(students, "Reza");

    cout << "After removing Reza:" << endl;

    for (const auto& student : students) {
        cout << student.first
             << ": " << student.second << endl;
    }

    return 0;
}