/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Count Nodes Equal to Average of Subtree
 * Reference : https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
 */

#include "solution.h"

using namespace std;

namespace CountNodesEqualToAverage {

int Solution::averageOfSubtree(TreeNode* root) {
    int rtn = 0;
    postOrder(root, rtn);
    return rtn;
}

pair<int, int> Solution::postOrder(TreeNode* node, int& count) {
    if(!node) return {0, 0};
    auto [leftSum, leftCount] = postOrder(node->left, count);
    auto [rightSum, rightCount] = postOrder(node->right, count);
    int total = leftSum + rightSum + node->val;
    int numNodes = leftCount + rightCount + 1;
    int avg = total / numNodes;        
    if (avg == node->val) count++;
    return {total, numNodes};
}

}