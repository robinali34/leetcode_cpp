/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Merge k Sorted Lists
 * Reference : https://leetcode.com/problems/merge-k-sorted-lists/
 */

#include "solution.h"
#include <queue>

using namespace std;

namespace MergeKSortedLists {

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
    for (auto l :lists) {
        if (l) pq.push(l);
    }
    while (!pq.empty()) {
        ListNode* cur = pq.top();
        pq.pop();
        tail->next = cur;
        tail = tail->next;
        if(cur->next) pq.push(cur->next);
    }
    return dummy.next;
}

}
