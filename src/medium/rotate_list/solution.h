/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Rotate List
 * Reference : https://leetcode.com/problems/rotate-list/
 */

#ifndef ROTATE_LIST_SOLUTION_H
#define ROTATE_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace RotateList {
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k);
};
}

#endif // ROTATE_LIST_SOLUTION_H
