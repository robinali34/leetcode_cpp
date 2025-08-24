/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for First Missing Positive
 * Reference : https://leetcode.com/problems/first-missing-positive/
 */

#include "solution.h"

using namespace std;

namespace FirstMissingPositive {

int Solution::firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    
    // First pass: place each number in its correct position
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    // Second pass: find the first missing positive
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    // If all numbers from 1 to n are present, return n + 1
    return n + 1;
}

}
