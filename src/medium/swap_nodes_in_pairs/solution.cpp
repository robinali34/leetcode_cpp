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
    ListNode dummy(-1);
    dummy.next = head;
    ListNode *pre = &dummy;
    while((head != nullptr) && (head->next != nullptr)) {
        ListNode *first = head, *second = head->next;
        pre->next = second;
        first->next = second->next;
        second->next = first;
        pre = first;
        head = first->next;
    }
    return dummy.next;
}

}
