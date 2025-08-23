/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Maximum Product Subarray
 * Reference : https://leetcode.com/problems/maximum-product-subarray/
 */

#include "solution.h"
#include <algorithm>

namespace MaximumProductSubarray {

int Solution::maxProduct(std::vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int maxProduct = nums[0];
    int currentMax = nums[0];
    int currentMin = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        int temp = currentMax;
        currentMax = std::max({nums[i], currentMax * nums[i], currentMin * nums[i]});
        currentMin = std::min({nums[i], temp * nums[i], currentMin * nums[i]});
        maxProduct = std::max(maxProduct, currentMax);
    }
    
    return maxProduct;
}

}
