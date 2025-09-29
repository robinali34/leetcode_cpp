/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Binary Tree Level Order Traversal
 * Reference : https://leetcode.com/problems/binary-tree-level-order-traversal/
 */

#ifndef BINARY_TREE_LEVEL_ORDER_SOLUTION_H
#define BINARY_TREE_LEVEL_ORDER_SOLUTION_H

#include <vector>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

using namespace std;

namespace BinaryTreeLevelOrder {
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root);
};
}

#endif // BINARY_TREE_LEVEL_ORDER_SOLUTION_H
