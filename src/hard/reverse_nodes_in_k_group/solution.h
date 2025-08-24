/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Reverse Nodes in k-Group
 * Reference : https://leetcode.com/problems/reverse-nodes-in-k-group/
 */

#ifndef REVERSE_NODES_IN_K_GROUP_SOLUTION_H
#define REVERSE_NODES_IN_K_GROUP_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace ReverseNodesInKGroup {
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k);
};
}

#endif // REVERSE_NODES_IN_K_GROUP_SOLUTION_H
