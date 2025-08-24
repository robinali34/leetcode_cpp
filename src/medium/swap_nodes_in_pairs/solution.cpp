/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Swap Nodes in Pairs
 * Reference : https://leetcode.com/problems/swap-nodes-in-pairs/
 */

#include "solution.h"

using namespace std;

namespace SwapNodesInPairs {

ListNode* Solution::swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy;
    
    while (prev->next != nullptr && prev->next->next != nullptr) {
        ListNode *first = prev->next;
        ListNode *second = prev->next->next;
        
        // Swap nodes
        first->next = second->next;
        second->next = first;
        prev->next = second;
        
        // Move to next pair
        prev = first;
    }
    
    ListNode *result = dummy->next;
    delete dummy;
    return result;
}

}
