/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Palindrome Linked List
 * Reference : https://leetcode.com/problems/palindrome-linked-list/
 */

#include "solution.h"

using namespace std;

namespace PalindromeLinkedList {

bool Solution::isPalindrome(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }
    
    // Find middle using slow/fast pointer
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Reverse second half
    ListNode *prev = nullptr;
    ListNode *current = slow->next;
    while (current != nullptr) {
        ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    // Compare first half with reversed second half
    ListNode *first = head;
    ListNode *second = prev;
    while (second != nullptr) {
        if (first->val != second->val) {
            return false;
        }
        first = first->next;
        second = second->next;
    }
    
    return true;
}

}
