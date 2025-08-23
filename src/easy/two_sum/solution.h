/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Two Sum
 * Reference : https://leetcode.com/problems/two-sum/
 */

#ifndef TWO_SUM_SOLUTION_H
#define TWO_SUM_SOLUTION_H

#include <vector>

namespace TwoSum {
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
};
}

#endif // TWO_SUM_SOLUTION_H
