/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Reorder List
 * Reference : https://leetcode.com/problems/reorder-list/
 */

#include "solution.h"

using namespace std;

namespace ReorderList {

void Solution::reorderList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    
    // Find middle using slow/fast pointer
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Reverse second half
    ListNode *prev = nullptr;
    ListNode *current = slow->next;
    slow->next = nullptr;
    
    while (current != nullptr) {
        ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    // Merge first half with reversed second half
    ListNode *first = head;
    ListNode *second = prev;
    
    while (second != nullptr) {
        ListNode *firstNext = first->next;
        ListNode *secondNext = second->next;
        
        first->next = second;
        second->next = firstNext;
        
        first = firstNext;
        second = secondNext;
    }
}

}
