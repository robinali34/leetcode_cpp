/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Maximum Product Subarray
 * Reference : https://leetcode.com/problems/maximum-product-subarray/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

namespace MaximumProductSubarray {

int Solution::maxProduct(vector<int>& nums) {
    if (nums.size() == 0) return 0;
        
    int max_so_far = nums[0];
    int min_so_far = nums[0];
    int max_prod = max_so_far;

    for (int i = 1; i < nums.size(); i++) {
        int curr = nums[i];
        int temp_max = max(curr, max(max_so_far * curr, min_so_far * curr));
        min_so_far = min(curr, min(max_so_far * curr, min_so_far * curr));
        max_so_far = temp_max;
        max_prod = max(max_so_far, max_prod);
    }
    return max_prod;
}

}
