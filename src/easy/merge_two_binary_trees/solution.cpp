/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Merge Two Binary Trees
 * Reference : https://leetcode.com/problems/merge-two-binary-trees/
 */

#include "solution.h"
#include <stack>

using namespace std;

namespace MergeTwoBinaryTrees {

TreeNode* Solution::mergeTrees(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr) return root2;
    stack<pair<TreeNode*, TreeNode*>> stk;
    stk.emplace(root1, root2);
    while(!stk.empty()) {
        auto [node1, node2] = stk.top();
        stk.pop();
        if(node1 == nullptr || node2 == nullptr) continue;
        node1->val += node2->val;
        if(node1->left == nullptr) {
            node1->left = node2->left;
        } else {
            stk.emplace(node1->left, node2->left);
        }
        if(node1->right == nullptr) {
            node1->right = node2->right;
        } else {
            stk.emplace(node1->right, node2->right);
        }
    }
    return root1;
}

}
