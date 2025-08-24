/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Linked List Cycle II
 * Reference : https://leetcode.com/problems/linked-list-cycle-ii/
 */

#ifndef LINKED_LIST_CYCLE_II_SOLUTION_H
#define LINKED_LIST_CYCLE_II_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;

namespace LinkedListCycleII {
class Solution {
public:
    ListNode *detectCycle(ListNode *head);
};
}

#endif // LINKED_LIST_CYCLE_II_SOLUTION_H
