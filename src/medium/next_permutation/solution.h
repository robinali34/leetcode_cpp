/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Next Permutation
 * Reference : https://leetcode.com/problems/next-permutation/
 */

#ifndef NEXT_PERMUTATION_SOLUTION_H
#define NEXT_PERMUTATION_SOLUTION_H

#include <vector>

using namespace std;

namespace NextPermutation {
class Solution {
public:
    void nextPermutation(vector<int>& nums);
private:
    void swap(vector<int>& nums, int i, int j);
    void reverse(vector<int>& nums, int start, int end);
};
}

#endif // NEXT_PERMUTATION_SOLUTION_H
