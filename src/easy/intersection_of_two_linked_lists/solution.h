/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Intersection of Two Linked Lists
 * Reference : https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

#ifndef INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION_H
#define INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using namespace std;

namespace IntersectionOfTwoLinkedLists {
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
};
}

#endif // INTERSECTION_OF_TWO_LINKED_LISTS_SOLUTION_H
