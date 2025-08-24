/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Reverse Linked List
 * Reference : https://leetcode.com/problems/reverse-linked-list/
 */

#include "solution.h"

using namespace std;

namespace ReverseLinkedList {

ListNode* Solution::reverseList(ListNode* head) {
    ListNode *prev = nullptr;
    ListNode *current = head;
    
    while (current != nullptr) {
        ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}

}
