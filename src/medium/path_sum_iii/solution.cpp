/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Path Sum III
 * Reference : https://leetcode.com/problems/path-sum-iii/
 */

#include "solution.h"

using namespace std;

namespace PathSumIII {

int Solution::pathSum(TreeNode* root, int targetSum) {
    if (!root) return 0;
    return countFrom(root, targetSum)
        + pathSum(root->left, targetSum)
        + pathSum(root->right, targetSum);
}

int Solution::countFrom(TreeNode* node, long long sum) {
    if(!node) return 0;
    int cnt = 0;
    if(node->val == sum) cnt++;
    cnt += countFrom(node->left, sum - node->val);
    cnt += countFrom(node->right, sum - node->val);
    return cnt;
}

}
