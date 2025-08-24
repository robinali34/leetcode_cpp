/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Remove Duplicates from Sorted List II
 * Reference : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
 */

#include "solution.h"

using namespace std;

namespace RemoveDuplicatesFromSortedListII {

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy;
    ListNode *current = head;
    
    while (current != nullptr && current->next != nullptr) {
        if (current->val == current->next->val) {
            // Skip all nodes with the same value
            int val = current->val;
            while (current != nullptr && current->val == val) {
                ListNode *temp = current;
                current = current->next;
                delete temp;
            }
            prev->next = current;
        } else {
            prev = current;
            current = current->next;
        }
    }
    
    ListNode *result = dummy->next;
    delete dummy;
    return result;
}

}
