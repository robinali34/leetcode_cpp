/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Reverse Nodes in k-Group
 * Reference : https://leetcode.com/problems/reverse-nodes-in-k-group/
 */

#include "solution.h"

using namespace std;

namespace ReverseNodesInKGroup {

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
    if (head == nullptr || k == 1) {
        return head;
    }
    
    // Count nodes in current group
    ListNode *current = head;
    int count = 0;
    while (current != nullptr && count < k) {
        current = current->next;
        count++;
    }
    
    // If we have k nodes, reverse them
    if (count == k) {
        ListNode *prev = nullptr;
        current = head;
        
        // Reverse k nodes
        for (int i = 0; i < k; i++) {
            ListNode *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        // Recursively reverse next k group
        head->next = reverseKGroup(current, k);
        return prev;
    }
    
    // If we don't have k nodes, return as is
    return head;
}

}
