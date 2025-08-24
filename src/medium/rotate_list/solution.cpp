/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Rotate List
 * Reference : https://leetcode.com/problems/rotate-list/
 */

#include "solution.h"

using namespace std;

namespace RotateList {

ListNode* Solution::rotateRight(ListNode* head, int k) {
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }
    
    // Count length and find tail
    int length = 1;
    ListNode *tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        length++;
    }
    
    // Normalize k
    k = k % length;
    if (k == 0) {
        return head;
    }
    
    // Find new tail (length - k - 1 steps from head)
    ListNode *newTail = head;
    for (int i = 0; i < length - k - 1; i++) {
        newTail = newTail->next;
    }
    
    // Rotate
    ListNode *newHead = newTail->next;
    newTail->next = nullptr;
    tail->next = head;
    
    return newHead;
}

}
