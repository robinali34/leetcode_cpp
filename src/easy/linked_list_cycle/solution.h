/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Linked List Cycle
 * Reference : https://leetcode.com/problems/linked-list-cycle/
 */

#ifndef LINKED_LIST_CYCLE_SOLUTION_H
#define LINKED_LIST_CYCLE_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;

namespace LinkedListCycle {
class Solution {
public:
    bool hasCycle(ListNode *head);
};
}

#endif // LINKED_LIST_CYCLE_SOLUTION_H
