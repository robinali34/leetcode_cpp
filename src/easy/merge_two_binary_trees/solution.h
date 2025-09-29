/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge Two Binary Trees
 * Reference : https://leetcode.com/problems/merge-two-binary-trees/
 */

#ifndef MERGE_TWO_BINARY_TREES_SOLUTION_H
#define MERGE_TWO_BINARY_TREES_SOLUTION_H

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

namespace MergeTwoBinaryTrees {
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
};
}

#endif // MERGE_TWO_BINARY_TREES_SOLUTION_H
