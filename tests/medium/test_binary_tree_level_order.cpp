/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_binary_tree_level_order.cpp
 * @desc : Test file for Binary Tree Level Order Traversal
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/binary_tree_level_order/solution.h"
#include "../../src/medium/binary_tree_level_order/solution.cpp"

// Helper function to create a tree node
TreeNode* createNode(int val) {
    return new TreeNode(val);
}

void testBinaryTreeLevelOrder() {
    BinaryTreeLevelOrder::Solution solution;
    
    // Test case 1: root = [3,9,20,null,null,15,7] -> [[3],[9,20],[15,7]]
    TreeNode* root1 = createNode(3);
    root1->left = createNode(9);
    root1->right = createNode(20);
    root1->right->left = createNode(15);
    root1->right->right = createNode(7);
    
    vector<vector<int>> result1 = solution.levelOrder(root1);
    vector<vector<int>> expected1 = {{3}, {9, 20}, {15, 7}};
    assert(result1 == expected1);
    std::cout << "Test 1 PASSED: [3,9,20,null,null,15,7]" << std::endl;
    
    // Test case 2: root = [1] -> [[1]]
    TreeNode* root2 = createNode(1);
    vector<vector<int>> result2 = solution.levelOrder(root2);
    vector<vector<int>> expected2 = {{1}};
    assert(result2 == expected2);
    std::cout << "Test 2 PASSED: [1]" << std::endl;
    
    // Test case 3: root = [] -> []
    TreeNode* root3 = nullptr;
    vector<vector<int>> result3 = solution.levelOrder(root3);
    vector<vector<int>> expected3 = {};
    assert(result3 == expected3);
    std::cout << "Test 3 PASSED: []" << std::endl;
}

int main() {
    try {
        testBinaryTreeLevelOrder();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
