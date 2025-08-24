/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Add Two Numbers
 * Reference : https://leetcode.com/problems/add-two-numbers/
 */

#ifndef ADD_TWO_NUMBERS_SOLUTION_H
#define ADD_TWO_NUMBERS_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace AddTwoNumbers {
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
}

#endif // ADD_TWO_NUMBERS_SOLUTION_H
