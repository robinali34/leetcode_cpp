/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Single Number
 * Reference : https://leetcode.com/problems/single-number/
 */

#include "solution.h"

using namespace std;

namespace SingleNumber {

int Solution::singleNumber(vector<int>& nums) {
    if (nums.size() < 1) return -1;
    int num = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        num ^= nums[i];
    }
    return num;
}

}
