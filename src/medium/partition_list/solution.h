/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Partition List
 * Reference : https://leetcode.com/problems/partition-list/
 */

#ifndef PARTITION_LIST_SOLUTION_H
#define PARTITION_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

using namespace std;

namespace PartitionList {
class Solution {
public:
    ListNode* partition(ListNode* head, int x);
};
}

#endif // PARTITION_LIST_SOLUTION_H
