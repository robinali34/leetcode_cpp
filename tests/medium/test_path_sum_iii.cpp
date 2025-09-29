/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_path_sum_iii.cpp
 * @desc : Test file for Path Sum III
 */

#include <iostream>
#include <cassert>
#include "../../src/medium/path_sum_iii/solution.h"
#include "../../src/medium/path_sum_iii/solution.cpp"

// Helper function to create a tree node
TreeNode* createNode(int val) {
    return new TreeNode(val);
}

void testPathSumIII() {
    PathSumIII::Solution solution;
    
    // Test case 1: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8 -> 3
    TreeNode* root1 = createNode(10);
    root1->left = createNode(5);
    root1->right = createNode(-3);
    root1->left->left = createNode(3);
    root1->left->right = createNode(2);
    root1->right->right = createNode(11);
    root1->left->left->left = createNode(3);
    root1->left->left->right = createNode(-2);
    root1->left->right->right = createNode(1);
    
    int result1 = solution.pathSum(root1, 8);
    assert(result1 == 3);
    std::cout << "Test 1 PASSED: [10,5,-3,3,2,null,11,3,-2,null,1], targetSum=8 -> " << result1 << std::endl;
    
    // Test case 2: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22 -> 3
    TreeNode* root2 = createNode(5);
    root2->left = createNode(4);
    root2->right = createNode(8);
    root2->left->left = createNode(11);
    root2->right->left = createNode(13);
    root2->right->right = createNode(4);
    root2->left->left->left = createNode(7);
    root2->left->left->right = createNode(2);
    root2->right->right->left = createNode(5);
    root2->right->right->right = createNode(1);
    
    int result2 = solution.pathSum(root2, 22);
    assert(result2 == 3);
    std::cout << "Test 2 PASSED: [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum=22 -> " << result2 << std::endl;
    
    // Test case 3: root = [1,-2,-3,1,3,-2,null,-1], targetSum = -1 -> 4
    TreeNode* root3 = createNode(1);
    root3->left = createNode(-2);
    root3->right = createNode(-3);
    root3->left->left = createNode(1);
    root3->left->right = createNode(3);
    root3->right->left = createNode(-2);
    root3->left->left->left = createNode(-1);
    
    int result3 = solution.pathSum(root3, -1);
    assert(result3 == 4);
    std::cout << "Test 3 PASSED: [1,-2,-3,1,3,-2,null,-1], targetSum=-1 -> " << result3 << std::endl;
}

int main() {
    try {
        testPathSumIII();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
