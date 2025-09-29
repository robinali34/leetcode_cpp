/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Count Nodes Equal to Average of Subtree
 * Reference : https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
 */

#ifndef COUNT_NODES_EQUAL_TO_AVERAGE_SOLUTION_H
#define COUNT_NODES_EQUAL_TO_AVERAGE_SOLUTION_H

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

namespace CountNodesEqualToAverage {
class Solution {
public:
    int averageOfSubtree(TreeNode* root);
private:
    pair<int, int> postOrder(TreeNode* node, int& count);
};
}

#endif // COUNT_NODES_EQUAL_TO_AVERAGE_SOLUTION_H
