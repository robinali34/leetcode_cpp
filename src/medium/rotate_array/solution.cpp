/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Leetcode
 * Reference : https://leetcode.com/problems/rotate-array/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

void RotateArray::Solution::rotate(vector<int>& nums, int k) {
    // In-place modification using rotate
    int n = nums.size();
    if (n == 0) return;
    
    k = k % n;
    if (k != 0) {
        std::rotate(nums.begin(), nums.begin() + (n - k), nums.end());
    }
}

void RotateArray::Solution::rotate1(vector<int>& nums, int k) {
    // Rotate using reverse method:
    // 1. Reverse all
    // 2. Reverse idx 0 to k - 1
    // 3. Reverse k to end
    int n = nums.size();
    if (n == 0) return;
    
    k = k % n;
    if (k == 0) return;
    
    reverse(nums, 0, n - 1);
    reverse(nums, k, n - 1);
    reverse(nums, 0, k - 1);
}

void RotateArray::Solution::reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
