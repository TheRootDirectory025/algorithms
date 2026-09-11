cmake_minimum_required(VERSION 4.3)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithms
        .idea/.gitignore
        .idea/workspace.xml
        01-complexity/time_complexity.cpp
        01-complexity/space_complexity.cpp
        01-complexity/big_o_examples.cpp
        02-arrays/traversal.cpp
        02-arrays/prefix_sum.cpp
        02-arrays/two_pointers.cpp
        02-arrays/sliding_window.cpp
        03-strings/string_operations.cpp
        03-strings/frequency_count.cpp
        03-strings/palindrome.cpp
        04-linked-list/singly_linked_list.cpp
        04-linked-list/doubly_linked_list.cpp
        04-linked-list/linked_list_operations.cpp
        05-stack/stack.cpp
)
