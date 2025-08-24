/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Remove Duplicates from Sorted List II
 * Reference : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
 */

#ifndef REMOVE_DUPLICATES_FROM_SORTED_LIST_II_SOLUTION_H
#define REMOVE_DUPLICATES_FROM_SORTED_LIST_II_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace RemoveDuplicatesFromSortedListII {
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head);
};
}

#endif // REMOVE_DUPLICATES_FROM_SORTED_LIST_II_SOLUTION_H
