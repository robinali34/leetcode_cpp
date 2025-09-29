/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_merge_k_sorted_lists.cpp
 * @desc : Test file for Merge k Sorted Lists
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/hard/merge_k_sorted_lists/solution.h"
#include "../../src/hard/merge_k_sorted_lists/solution.cpp"

// Helper function to create a linked list from vector
ListNode* createList(vector<int> values) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    
    for (int i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    
    return head;
}

// Helper function to convert linked list to vector
vector<int> listToVector(ListNode* head) {
    vector<int> result;
    ListNode* current = head;
    
    while (current) {
        result.push_back(current->val);
        current = current->next;
    }
    
    return result;
}

void testMergeKSortedLists() {
    MergeKSortedLists::Solution solution;
    
    // Test case 1: lists = [[1,4,5],[1,3,4],[2,6]] -> [1,1,2,3,4,4,5,6]
    vector<ListNode*> lists1;
    lists1.push_back(createList({1, 4, 5}));
    lists1.push_back(createList({1, 3, 4}));
    lists1.push_back(createList({2, 6}));
    
    ListNode* result1 = solution.mergeKLists(lists1);
    vector<int> expected1 = {1, 1, 2, 3, 4, 4, 5, 6};
    vector<int> actual1 = listToVector(result1);
    assert(actual1 == expected1);
    std::cout << "Test 1 PASSED: Merge 3 sorted lists" << std::endl;
    
    // Test case 2: lists = [] -> []
    vector<ListNode*> lists2;
    ListNode* result2 = solution.mergeKLists(lists2);
    assert(result2 == nullptr);
    std::cout << "Test 2 PASSED: Empty list" << std::endl;
    
    // Test case 3: lists = [[]] -> []
    vector<ListNode*> lists3;
    lists3.push_back(nullptr);
    ListNode* result3 = solution.mergeKLists(lists3);
    assert(result3 == nullptr);
    std::cout << "Test 3 PASSED: List with null" << std::endl;
}

int main() {
    try {
        testMergeKSortedLists();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
