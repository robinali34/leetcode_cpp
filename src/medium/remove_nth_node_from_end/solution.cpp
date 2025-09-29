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
    ListNode dummy(0); // Not dynamically allocated
    dummy.next = head;
    ListNode *first = &dummy;
    ListNode *second = &dummy;
    for(int i = 0; i <= n; i++) {
        first = first->next;
    }
    while(first != NULL) {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return dummy.next;
}

}
