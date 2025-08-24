/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge Two Sorted Lists
 * Reference : https://leetcode.com/problems/merge-two-sorted-lists/
 */

#ifndef MERGE_TWO_SORTED_LISTS_SOLUTION_H
#define MERGE_TWO_SORTED_LISTS_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace MergeTwoSortedLists {
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};
}

#endif // MERGE_TWO_SORTED_LISTS_SOLUTION_H
