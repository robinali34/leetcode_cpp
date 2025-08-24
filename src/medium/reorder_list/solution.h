/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Reorder List
 * Reference : https://leetcode.com/problems/reorder-list/
 */

#ifndef REORDER_LIST_SOLUTION_H
#define REORDER_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace ReorderList {
class Solution {
public:
    void reorderList(ListNode* head);
};
}

#endif // REORDER_LIST_SOLUTION_H
