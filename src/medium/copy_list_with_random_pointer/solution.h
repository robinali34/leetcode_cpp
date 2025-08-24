/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Copy List with Random Pointer
 * Reference : https://leetcode.com/problems/copy-list-with-random-pointer/
 */

#ifndef COPY_LIST_WITH_RANDOM_POINTER_SOLUTION_H
#define COPY_LIST_WITH_RANDOM_POINTER_SOLUTION_H

// Definition for a Node
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

using namespace std;

namespace CopyListWithRandomPointer {
class Solution {
public:
    Node* copyRandomList(Node* head);
};
}

#endif // COPY_LIST_WITH_RANDOM_POINTER_SOLUTION_H
