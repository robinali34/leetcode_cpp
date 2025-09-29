/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Split Linked List in Parts
 * Reference : https://leetcode.com/problems/split-linked-list-in-parts/
 */

#include "solution.h"

using namespace std;

namespace SplitLinkedListInParts {

vector<ListNode*> Solution::splitListToParts(ListNode* head, int k) {
    int n = 0;
    ListNode * temp = head;
    while (temp != nullptr) {
        n++;
        temp = temp->next;
    }
    int size = n / k, remainder = n % k;

    vector<ListNode*> parts(k, nullptr);
    temp = head;
    for (int i = 0; i < k && temp != nullptr; i++) {
        parts[i] = temp;
        int part_sz = size + (i < remainder ? 1: 0);
        for (int j = 1; j < part_sz; j++) {
            temp = temp->next;
        }
        ListNode *next = temp->next;
        temp->next = nullptr;
        temp = next;
    }
    return parts;
}

}
