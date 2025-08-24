/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Swap Nodes in Pairs
 * Reference : https://leetcode.com/problems/swap-nodes-in-pairs/
 */

#ifndef SWAP_NODES_IN_PAIRS_SOLUTION_H
#define SWAP_NODES_IN_PAIRS_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace SwapNodesInPairs {
class Solution {
public:
    ListNode* swapPairs(ListNode* head);
};
}

#endif // SWAP_NODES_IN_PAIRS_SOLUTION_H
