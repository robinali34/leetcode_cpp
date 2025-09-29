/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Split Linked List in Parts
 * Reference : https://leetcode.com/problems/split-linked-list-in-parts/
 */

#ifndef SPLIT_LINKED_LIST_IN_PARTS_SOLUTION_H
#define SPLIT_LINKED_LIST_IN_PARTS_SOLUTION_H

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include <vector>

using namespace std;

namespace SplitLinkedListInParts {
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k);
};
}

#endif // SPLIT_LINKED_LIST_IN_PARTS_SOLUTION_H
