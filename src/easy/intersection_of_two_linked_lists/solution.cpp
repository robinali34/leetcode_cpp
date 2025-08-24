/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Intersection of Two Linked Lists
 * Reference : https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

#include "solution.h"

using namespace std;

namespace IntersectionOfTwoLinkedLists {

ListNode *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr) {
        return nullptr;
    }
    
    ListNode *ptrA = headA;
    ListNode *ptrB = headB;
    
    // When ptrA reaches end, redirect to headB
    // When ptrB reaches end, redirect to headA
    // This way they will meet at intersection point
    while (ptrA != ptrB) {
        ptrA = (ptrA == nullptr) ? headB : ptrA->next;
        ptrB = (ptrB == nullptr) ? headA : ptrB->next;
    }
    
    return ptrA;
}

}
