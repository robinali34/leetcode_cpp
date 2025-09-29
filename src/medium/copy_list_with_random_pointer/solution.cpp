/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Copy List with Random Pointer
 * Reference : https://leetcode.com/problems/copy-list-with-random-pointer/
 */

#include "solution.h"
#include <unordered_map>

using namespace std;

namespace CopyListWithRandomPointer {

Node* Solution::copyRandomList(Node* head) {
    if (!head) return nullptr;
    Node* ptr = head;
    while (ptr != nullptr) {
        Node* newNode = new Node(ptr->val, nullptr, nullptr);
        newNode->next = ptr->next;
        ptr->next = newNode;
        ptr = newNode->next;
    }
    ptr = head;
    while(ptr != nullptr) {
        ptr->next->random = 
            (ptr->random != nullptr) ? ptr->random->next : nullptr;
        ptr = ptr->next->next;
    }
    
    Node* ptr_old_list = head;
    Node* ptr_new_list = head->next;
    Node* head_old = head->next;
    while(ptr_old_list != nullptr) {
        ptr_old_list->next = ptr_old_list->next->next;
        ptr_new_list->next = (ptr_new_list->next != nullptr)
                                ? ptr_new_list->next->next
                                : nullptr;
        ptr_old_list = ptr_old_list->next;
        ptr_new_list = ptr_new_list->next;
    }
    return head_old;
}

}
