/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Reverse Nodes in k-Group
 * Reference : https://leetcode.com/problems/reverse-nodes-in-k-group/
 */

#include "solution.h"

using namespace std;

namespace ReverseNodesKGroup {

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
    int count = 0;
    ListNode* ptr = head;
    while(count < k && ptr != nullptr) {
        ptr = ptr->next;
        count++;
    }
    if(count == k) {
        ListNode* reversedHead = this->reverseLinkedList(head, k);
        head->next = this->reverseKGroup(ptr, k);
        return reversedHead;
    }
    return head;        
}

ListNode* Solution::reverseLinkedList(ListNode* head, int k){
    ListNode* new_head = nullptr;
    ListNode* ptr = head;
    while(k > 0) {
        ListNode* next_node = ptr->next;
        ptr->next = new_head;
        new_head = ptr;
        ptr = next_node;
        k--;
    }
    return new_head;
}

}
