/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_split_linked_list_in_parts.cpp
 * @desc : Test file for Split Linked List in Parts
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/split_linked_list_in_parts/solution.h"
#include "../../src/medium/split_linked_list_in_parts/solution.cpp"

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

void testSplitLinkedListInParts() {
    SplitLinkedListInParts::Solution solution;
    
    // Test case 1: head = [1,2,3], k = 5 -> [[1],[2],[3],[],[]]
    ListNode* head1 = createList({1, 2, 3});
    vector<ListNode*> result1 = solution.splitListToParts(head1, 5);
    assert(result1.size() == 5);
    vector<int> part1 = listToVector(result1[0]);
    vector<int> expected1 = {1};
    assert(part1 == expected1);
    std::cout << "Test 1 PASSED: [1,2,3], k=5" << std::endl;
    
    // Test case 2: head = [1,2,3,4,5,6,7,8,9,10], k = 3 -> [[1,2,3,4],[5,6,7],[8,9,10]]
    ListNode* head2 = createList({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    vector<ListNode*> result2 = solution.splitListToParts(head2, 3);
    assert(result2.size() == 3);
    vector<int> part2_0 = listToVector(result2[0]);
    vector<int> expected2_0 = {1, 2, 3, 4};
    assert(part2_0 == expected2_0);
    std::cout << "Test 2 PASSED: [1,2,3,4,5,6,7,8,9,10], k=3" << std::endl;
    
    // Test case 3: head = [], k = 3 -> [[],[],[]]
    ListNode* head3 = nullptr;
    vector<ListNode*> result3 = solution.splitListToParts(head3, 3);
    assert(result3.size() == 3);
    assert(result3[0] == nullptr);
    assert(result3[1] == nullptr);
    assert(result3[2] == nullptr);
    std::cout << "Test 3 PASSED: [], k=3" << std::endl;
}

int main() {
    try {
        testSplitLinkedListInParts();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
