/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge k Sorted Lists
 * Reference : https://leetcode.com/problems/merge-k-sorted-lists/
 */

#ifndef MERGE_K_SORTED_LISTS_SOLUTION_H
#define MERGE_K_SORTED_LISTS_SOLUTION_H

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

namespace MergeKSortedLists {
struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);
};
}

#endif // MERGE_K_SORTED_LISTS_SOLUTION_H
