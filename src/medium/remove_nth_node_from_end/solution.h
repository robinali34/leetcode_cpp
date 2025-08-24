/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Remove Nth Node From End
 * Reference : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */

#ifndef REMOVE_NTH_NODE_FROM_END_SOLUTION_H
#define REMOVE_NTH_NODE_FROM_END_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace RemoveNthNodeFromEnd {
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n);
};
}

#endif // REMOVE_NTH_NODE_FROM_END_SOLUTION_H
