/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Check If a Number Is Majority Element in a Sorted Array
 * Reference : https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

namespace MajorityElementSortedArray {

bool Solution::isMajorityElement(vector<int>& nums, int target) {
    const int n = size(nums);
    auto first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    auto last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    return (last - first) > n / 2;
}

bool Solution::isMajorityElementBinarySearch(vector<int>& nums, int target) {
    const int n = nums.size();
    
    // Count occurrences of the target
    int count = 0;
    for (int num : nums) {
        if (num == target) {
            count++;
        }
    }
    
    return count > n / 2;
}
}
