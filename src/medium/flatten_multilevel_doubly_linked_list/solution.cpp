/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Flatten a Multilevel Doubly Linked List
 * Reference : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
 */

#include "solution.h"

using namespace std;

namespace FlattenMultilevelDoublyLinkedList {

Node* Solution::flatten(Node* head) {
    if (head == nullptr) {
        return head;
    }
    
    Node *current = head;
    
    while (current != nullptr) {
        if (current->child != nullptr) {
            Node *next = current->next;
            
            // Flatten child list
            Node *childTail = current->child;
            while (childTail->next != nullptr) {
                childTail = childTail->next;
            }
            
            // Connect current to child
            current->next = current->child;
            current->child->prev = current;
            current->child = nullptr;
            
            // Connect child tail to next
            if (next != nullptr) {
                childTail->next = next;
                next->prev = childTail;
            }
        }
        
        current = current->next;
    }
    
    return head;
}

}
