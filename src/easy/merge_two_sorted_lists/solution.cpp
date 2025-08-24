/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Merge Two Sorted Lists
 * Reference : https://leetcode.com/problems/merge-two-sorted-lists/
 */

#include "solution.h"

using namespace std;

namespace MergeTwoSortedLists {

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *dummy = new ListNode(0);
    ListNode *current = dummy;
    
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    
    // Attach remaining nodes
    if (list1 != nullptr) {
        current->next = list1;
    }
    if (list2 != nullptr) {
        current->next = list2;
    }
    
    ListNode *result = dummy->next;
    delete dummy;
    return result;
}

}
