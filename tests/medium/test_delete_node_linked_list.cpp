/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_delete_node_linked_list.cpp
 * @desc : Test file for Delete Node in a Linked List
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/delete_node_linked_list/solution.h"
#include "../../src/medium/delete_node_linked_list/solution.cpp"

// Helper function to create a linked list from vector
ListNode* createList(std::vector<int> values) {
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
std::vector<int> listToVector(ListNode* head) {
    std::vector<int> result;
    ListNode* current = head;
    
    while (current) {
        result.push_back(current->val);
        current = current->next;
    }
    
    return result;
}

void testDeleteNodeLinkedList() {
    DeleteNodeLinkedList::Solution solution;
    
    // Test case 1: [4,5,1,9], delete node 5 -> [4,1,9]
    ListNode* head1 = createList({4, 5, 1, 9});
    ListNode* nodeToDelete1 = head1->next; // node with value 5
    solution.deleteNode(nodeToDelete1);
    std::vector<int> result1 = listToVector(head1);
    std::vector<int> expected1 = {4, 1, 9};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED: Delete node 5 from [4,5,1,9]" << std::endl;
    
    // Test case 2: [4,5,1,9], delete node 1 -> [4,5,9]
    ListNode* head2 = createList({4, 5, 1, 9});
    ListNode* nodeToDelete2 = head2->next->next; // node with value 1
    solution.deleteNode(nodeToDelete2);
    std::vector<int> result2 = listToVector(head2);
    std::vector<int> expected2 = {4, 5, 9};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED: Delete node 1 from [4,5,1,9]" << std::endl;
}

int main() {
    try {
        testDeleteNodeLinkedList();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
