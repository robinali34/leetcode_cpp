/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Palindrome Linked List
 * Reference : https://leetcode.com/problems/palindrome-linked-list/
 */

#ifndef PALINDROME_LINKED_LIST_SOLUTION_H
#define PALINDROME_LINKED_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace PalindromeLinkedList {
class Solution {
public:
    bool isPalindrome(ListNode* head);
};
}

#endif // PALINDROME_LINKED_LIST_SOLUTION_H
