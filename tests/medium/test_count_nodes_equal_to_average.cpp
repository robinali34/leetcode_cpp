/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_count_nodes_equal_to_average.cpp
 * @desc : Test file for Count Nodes Equal to Average of Subtree
 */

#include <iostream>
#include <cassert>
#include "../../src/medium/count_nodes_equal_to_average/solution.h"
#include "../../src/medium/count_nodes_equal_to_average/solution.cpp"

// Helper function to create a tree node
TreeNode* createNode(int val) {
    return new TreeNode(val);
}

void testCountNodesEqualToAverage() {
    CountNodesEqualToAverage::Solution solution;
    
    // Test case 1: root = [4,8,5,0,1,null,6] -> 5
    // Explanation: 
    // - Node 4: avg = (4+8+5+0+1+6)/6 = 4, 4==4 ✓
    // - Node 8: avg = (8+0+1)/3 = 3, 8!=3 ✗
    // - Node 5: avg = (5+6)/2 = 5, 5==5 ✓
    // - Node 0: avg = 0/1 = 0, 0==0 ✓
    // - Node 1: avg = 1/1 = 1, 1==1 ✓
    // - Node 6: avg = 6/1 = 6, 6==6 ✓
    // Total: 5 nodes
    TreeNode* root1 = createNode(4);
    root1->left = createNode(8);
    root1->right = createNode(5);
    root1->left->left = createNode(0);
    root1->left->right = createNode(1);
    root1->right->right = createNode(6);
    
    int result1 = solution.averageOfSubtree(root1);
    assert(result1 == 5);
    std::cout << "Test 1 PASSED: [4,8,5,0,1,null,6] -> " << result1 << std::endl;
    
    // Test case 2: root = [1] -> 1
    // Explanation: Node 1: avg = 1/1 = 1, 1==1 ✓
    TreeNode* root2 = createNode(1);
    int result2 = solution.averageOfSubtree(root2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: [1] -> " << result2 << std::endl;
    
    // Test case 3: root = [1,2,3] -> 2
    // Explanation:
    // - Node 1: avg = (1+2+3)/3 = 2, 1!=2 ✗
    // - Node 2: avg = 2/1 = 2, 2==2 ✓
    // - Node 3: avg = 3/1 = 3, 3==3 ✓
    // Total: 2 nodes
    TreeNode* root3 = createNode(1);
    root3->left = createNode(2);
    root3->right = createNode(3);
    int result3 = solution.averageOfSubtree(root3);
    assert(result3 == 2);
    std::cout << "Test 3 PASSED: [1,2,3] -> " << result3 << std::endl;
    
    // Test case 4: root = [1,2,3,4,5,6,7] -> 3
    // Explanation:
    // - Node 1: avg = (1+2+3+4+5+6+7)/7 = 4, 1!=4 ✗
    // - Node 2: avg = (2+4+5)/3 = 3, 2!=3 ✗
    // - Node 3: avg = (3+6+7)/3 = 5, 3!=5 ✗
    // - Node 4: avg = 4/1 = 4, 4==4 ✓
    // - Node 5: avg = 5/1 = 5, 5==5 ✓
    // - Node 6: avg = 6/1 = 6, 6==6 ✓
    // - Node 7: avg = 7/1 = 7, 7==7 ✓
    // Total: 4 nodes (but expected 3, let me recalculate...)
    // Actually: Node 1 avg = 28/7 = 4, Node 2 avg = 11/3 = 3, Node 3 avg = 16/3 = 5
    // So only leaves match: 4,5,6,7 = 4 nodes. Let me use a different test case.
    
    // Test case 4: root = [1,2,3,4,5] -> 3
    // Explanation:
    // - Node 1: avg = (1+2+3+4+5)/5 = 3, 1!=3 ✗
    // - Node 2: avg = (2+4+5)/3 = 3, 2!=3 ✗
    // - Node 3: avg = 3/1 = 3, 3==3 ✓
    // - Node 4: avg = 4/1 = 4, 4==4 ✓
    // - Node 5: avg = 5/1 = 5, 5==5 ✓
    // Total: 3 nodes
    TreeNode* root4 = createNode(1);
    root4->left = createNode(2);
    root4->right = createNode(3);
    root4->left->left = createNode(4);
    root4->left->right = createNode(5);
    int result4 = solution.averageOfSubtree(root4);
    assert(result4 == 3);
    std::cout << "Test 4 PASSED: [1,2,3,4,5] -> " << result4 << std::endl;
}

int main() {
    try {
        testCountNodesEqualToAverage();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
