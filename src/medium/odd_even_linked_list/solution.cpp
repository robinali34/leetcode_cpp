/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Odd Even Linked List
 * Reference : https://leetcode.com/problems/odd-even-linked-list/
 */

#include "solution.h"

using namespace std;

namespace OddEvenLinkedList {

ListNode* Solution::oddEvenList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenHead = even;
    
    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    
    odd->next = evenHead;
    return head;
}

}
