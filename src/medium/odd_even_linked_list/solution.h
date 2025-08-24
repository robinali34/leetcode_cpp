/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Odd Even Linked List
 * Reference : https://leetcode.com/problems/odd-even-linked-list/
 */

#ifndef ODD_EVEN_LINKED_LIST_SOLUTION_H
#define ODD_EVEN_LINKED_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace OddEvenLinkedList {
class Solution {
public:
    ListNode* oddEvenList(ListNode* head);
};
}

#endif // ODD_EVEN_LINKED_LIST_SOLUTION_H
