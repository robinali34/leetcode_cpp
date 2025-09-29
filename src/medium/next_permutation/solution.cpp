/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Next Permutation
 * Reference : https://leetcode.com/problems/next-permutation/
 */

#include "solution.h"

using namespace std;

namespace NextPermutation {

void Solution::nextPermutation(vector<int>& nums) {
    int i = nums.size() -2;
    while (i >= 0 && nums[i + 1] <= nums[i]) {
        i--;
    }
    if (i >= 0) {
        int j = nums.size() - 1;
        while(nums[j] <= nums[i]) {
            j--;
        }
        swap(nums, i, j);
    }
    reverse(nums, i + 1, nums.size() - 1);
}

void Solution::swap(vector<int>& nums, int i, int j) {
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}

void Solution::reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums, start, end);
        start++;
        end--;
    }
}

}
