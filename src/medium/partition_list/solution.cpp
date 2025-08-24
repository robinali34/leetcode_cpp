/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Partition List
 * Reference : https://leetcode.com/problems/partition-list/
 */

#include "solution.h"

using namespace std;

namespace PartitionList {

ListNode* Solution::partition(ListNode* head, int x) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    ListNode *beforeHead = new ListNode(0);
    ListNode *afterHead = new ListNode(0);
    ListNode *before = beforeHead;
    ListNode *after = afterHead;
    
    while (head != nullptr) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }
    
    // Connect before and after lists
    after->next = nullptr;
    before->next = afterHead->next;
    
    ListNode *result = beforeHead->next;
    delete beforeHead;
    delete afterHead;
    
    return result;
}

}
