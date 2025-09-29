/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_merge_two_binary_trees.cpp
 * @desc : Test file for Merge Two Binary Trees
 */

#include <iostream>
#include <cassert>
#include "../../src/easy/merge_two_binary_trees/solution.h"
#include "../../src/easy/merge_two_binary_trees/solution.cpp"

// Helper function to create a tree node
TreeNode* createNode(int val) {
    return new TreeNode(val);
}

// Helper function to check if two trees are equal
bool isEqual(TreeNode* root1, TreeNode* root2) {
    if (!root1 && !root2) return true;
    if (!root1 || !root2) return false;
    return root1->val == root2->val && 
           isEqual(root1->left, root2->left) && 
           isEqual(root1->right, root2->right);
}

void testMergeTwoBinaryTrees() {
    MergeTwoBinaryTrees::Solution solution;
    
    // Test case 1: root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
    TreeNode* root1 = createNode(1);
    root1->left = createNode(3);
    root1->right = createNode(2);
    root1->left->left = createNode(5);
    
    TreeNode* root2 = createNode(2);
    root2->left = createNode(1);
    root2->right = createNode(3);
    root2->left->right = createNode(4);
    root2->right->right = createNode(7);
    
    TreeNode* result = solution.mergeTrees(root1, root2);
    assert(result != nullptr);
    assert(result->val == 3);
    assert(result->left->val == 4);
    assert(result->right->val == 5);
    std::cout << "Test 1 PASSED: Merge trees" << std::endl;
    
    // Test case 2: root1 = [1], root2 = [1,2]
    TreeNode* root3 = createNode(1);
    TreeNode* root4 = createNode(1);
    root4->left = createNode(2);
    
    TreeNode* result2 = solution.mergeTrees(root3, root4);
    assert(result2 != nullptr);
    assert(result2->val == 2);
    assert(result2->left->val == 2);
    std::cout << "Test 2 PASSED: Merge simple trees" << std::endl;
}

int main() {
    try {
        testMergeTwoBinaryTrees();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
