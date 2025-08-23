/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Product of Array Except Self
 * Reference : https://leetcode.com/problems/product-of-array-except-self/
 */

#ifndef PRODUCT_OF_ARRAY_EXCEPT_SELF_SOLUTION_H
#define PRODUCT_OF_ARRAY_EXCEPT_SELF_SOLUTION_H

#include <vector>

namespace ProductOfArrayExceptSelf {
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums);
};
}

#endif // PRODUCT_OF_ARRAY_EXCEPT_SELF_SOLUTION_H
