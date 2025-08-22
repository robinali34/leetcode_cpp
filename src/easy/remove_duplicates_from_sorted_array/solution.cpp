/*
 * Copyright 2021 Robina Li. BSD 3-Clause License All Rights Reserved.
 * @file : solution.cpp
 * @desc : Solution for Leetcode
 * Reference : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

#include "solution.h"

int Solution::removeDuplicates(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    
    int idx = 0;
    // Two pointers, i at original array index, idx at return index
    for (int i = 1; i < n; ++i) {
        if (nums[idx] != nums[i]) {
            idx++;
            nums[idx] = nums[i];
        }
    }
    return idx + 1;
}
