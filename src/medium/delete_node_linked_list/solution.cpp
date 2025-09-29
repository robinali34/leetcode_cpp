/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Delete Node in a Linked List
 * Reference : https://leetcode.com/problems/delete-node-in-a-linked-list/
 */

#include "solution.h"

using namespace std;

namespace DeleteNodeLinkedList {

void Solution::deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

}
