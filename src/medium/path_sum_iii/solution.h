/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Path Sum III
 * Reference : https://leetcode.com/problems/path-sum-iii/
 */

#ifndef PATH_SUM_III_SOLUTION_H
#define PATH_SUM_III_SOLUTION_H

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

namespace PathSumIII {
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum);
private:
    int countFrom(TreeNode* node, long long sum);
};
}

#endif // PATH_SUM_III_SOLUTION_H
