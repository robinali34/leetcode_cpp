/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Maximum Subarray
 * Reference : https://leetcode.com/problems/maximum-subarray/
 */

#include "solution.h"
#include <algorithm>

namespace MaximumSubarray {

int Solution::maxSubArray(std::vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int currentSum = nums[0];
    int maxSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }
    
    return maxSum;
}

}
