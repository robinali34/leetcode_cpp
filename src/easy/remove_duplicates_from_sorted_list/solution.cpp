/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Remove Duplicates from Sorted List
 * Reference : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 */

#include "solution.h"

using namespace std;

namespace RemoveDuplicatesFromSortedList {

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    ListNode *current = head;
    
    while (current->next != nullptr) {
        if (current->val == current->next->val) {
            ListNode *temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
    
    return head;
}

}
