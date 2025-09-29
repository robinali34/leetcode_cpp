/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Binary Tree Level Order Traversal
 * Reference : https://leetcode.com/problems/binary-tree-level-order-traversal/
 */

#include "solution.h"
#include <queue>

using namespace std;

namespace BinaryTreeLevelOrder {

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if(root == nullptr) return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int sz = q.size();
        vector<int> level;
        for (int i = 0; i < sz; i++) {
            TreeNode* n = q.front();
            q.pop();
            level.push_back(n->val);
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
        res.push_back(level);
    }
    return res;
}

}
