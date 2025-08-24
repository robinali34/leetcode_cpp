/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Reverse Linked List
 * Reference : https://leetcode.com/problems/reverse-linked-list/
 */

#ifndef REVERSE_LINKED_LIST_SOLUTION_H
#define REVERSE_LINKED_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace ReverseLinkedList {
class Solution {
public:
    ListNode* reverseList(ListNode* head);
};
}

#endif // REVERSE_LINKED_LIST_SOLUTION_H
