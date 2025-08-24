/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Linked List Cycle II
 * Reference : https://leetcode.com/problems/linked-list-cycle-ii/
 */

#include "solution.h"

using namespace std;

namespace LinkedListCycleII {

ListNode *Solution::detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    
    ListNode *slow = head;
    ListNode *fast = head;
    
    // Find intersection point
    do {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast && fast != nullptr && fast->next != nullptr);
    
    // No cycle
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }
    
    // Find entrance to cycle
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
}

}
