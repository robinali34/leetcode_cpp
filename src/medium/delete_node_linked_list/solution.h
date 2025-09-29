/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Delete Node in a Linked List
 * Reference : https://leetcode.com/problems/delete-node-in-a-linked-list/
 */

#ifndef DELETE_NODE_LINKED_LIST_SOLUTION_H
#define DELETE_NODE_LINKED_LIST_SOLUTION_H

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;

namespace DeleteNodeLinkedList {
class Solution {
public:
    void deleteNode(ListNode* node);
};
}

#endif // DELETE_NODE_LINKED_LIST_SOLUTION_H
