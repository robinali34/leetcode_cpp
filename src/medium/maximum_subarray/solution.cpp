/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Maximum Subarray
 * Reference : https://leetcode.com/problems/maximum-subarray/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

namespace MaximumSubarray {

int Solution::maxSubArray(vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int currentSum = nums[0];
    int maxSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

}
