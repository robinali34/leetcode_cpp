/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Remove Nth Node From End
 * Reference : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */

#include "solution.h"

using namespace std;

namespace RemoveNthNodeFromEnd {

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode *first = dummy;
    ListNode *second = dummy;
    
    // Move first pointer n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        first = first->next;
    }
    
    // Move both pointers until first reaches end
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }
    
    // Remove the nth node from end
    ListNode *temp = second->next;
    second->next = second->next->next;
    delete temp;
    
    ListNode *result = dummy->next;
    delete dummy;
    return result;
}

}
