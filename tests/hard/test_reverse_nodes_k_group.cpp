/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_reverse_nodes_k_group.cpp
 * @desc : Test file for Reverse Nodes in k-Group
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/hard/reverse_nodes_k_group/solution.h"
#include "../../src/hard/reverse_nodes_k_group/solution.cpp"

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

void testReverseNodesKGroup() {
    ReverseNodesKGroup::Solution solution;
    
    // Test case 1: head = [1,2,3,4,5], k = 2 -> [2,1,4,3,5]
    ListNode* head1 = createList({1, 2, 3, 4, 5});
    ListNode* result1 = solution.reverseKGroup(head1, 2);
    vector<int> expected1 = {2, 1, 4, 3, 5};
    vector<int> actual1 = listToVector(result1);
    assert(actual1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3,4,5], k=2 -> [2,1,4,3,5]" << std::endl;
    
    // Test case 2: head = [1,2,3,4,5], k = 3 -> [3,2,1,4,5]
    ListNode* head2 = createList({1, 2, 3, 4, 5});
    ListNode* result2 = solution.reverseKGroup(head2, 3);
    vector<int> expected2 = {3, 2, 1, 4, 5};
    vector<int> actual2 = listToVector(result2);
    assert(actual2 == expected2);
    std::cout << "Test 2 PASSED: [1,2,3,4,5], k=3 -> [3,2,1,4,5]" << std::endl;
    
    // Test case 3: head = [1,2,3,4,5], k = 1 -> [1,2,3,4,5]
    ListNode* head3 = createList({1, 2, 3, 4, 5});
    ListNode* result3 = solution.reverseKGroup(head3, 1);
    vector<int> expected3 = {1, 2, 3, 4, 5};
    vector<int> actual3 = listToVector(result3);
    assert(actual3 == expected3);
    std::cout << "Test 3 PASSED: [1,2,3,4,5], k=1 -> [1,2,3,4,5]" << std::endl;
}

int main() {
    try {
        testReverseNodesKGroup();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
