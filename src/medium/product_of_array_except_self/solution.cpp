/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Product of Array Except Self
 * Reference : https://leetcode.com/problems/product-of-array-except-self/
 */

#include "solution.h"

namespace ProductOfArrayExceptSelf {

std::vector<int> Solution::productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n, 1);
    
    // Calculate left products
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }
    
    // Calculate right products and combine
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    
    return result;
}

}
