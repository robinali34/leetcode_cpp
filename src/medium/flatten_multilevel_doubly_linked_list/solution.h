/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Flatten a Multilevel Doubly Linked List
 * Reference : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
 */

#ifndef FLATTEN_MULTILEVEL_DOUBLY_LINKED_LIST_SOLUTION_H
#define FLATTEN_MULTILEVEL_DOUBLY_LINKED_LIST_SOLUTION_H

// Definition for a Node
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    
    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

using namespace std;

namespace FlattenMultilevelDoublyLinkedList {
class Solution {
public:
    Node* flatten(Node* head);
};
}

#endif // FLATTEN_MULTILEVEL_DOUBLY_LINKED_LIST_SOLUTION_H
