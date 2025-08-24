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
    if (head == nullptr) {
        return nullptr;
    }
    
    // First pass: create copy nodes and interleave them
    Node *current = head;
    while (current != nullptr) {
        Node *copy = new Node(current->val);
        copy->next = current->next;
        current->next = copy;
        current = copy->next;
    }
    
    // Second pass: set random pointers
    current = head;
    while (current != nullptr) {
        if (current->random != nullptr) {
            current->next->random = current->random->next;
        }
        current = current->next->next;
    }
    
    // Third pass: separate original and copy lists
    Node *dummy = new Node(0);
    Node *copyCurrent = dummy;
    current = head;
    
    while (current != nullptr) {
        copyCurrent->next = current->next;
        copyCurrent = copyCurrent->next;
        current->next = current->next->next;
        current = current->next;
    }
    
    Node *result = dummy->next;
    delete dummy;
    return result;
}

}
