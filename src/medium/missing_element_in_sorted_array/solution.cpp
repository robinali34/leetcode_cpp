/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Missing Element in Sorted Array
 * Reference : https://leetcode.com/problems/missing-element-in-sorted-array/
 */

#include "solution.h"

using namespace std;

namespace MissingElementInSortedArray {
    int missing(int idx, const vector<int>& nums) {
        return nums[idx] - nums[0] - idx;
    }

    int Solution::missingElement(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > missing(n - 1, nums))
            return nums[n - 1] + k - missing(n - 1, nums);

        int left = 0, right = n -1, pivot;
        while(left != right) {
            pivot = left + (right - left) / 2;
            if(missing(pivot, nums) < k) left = pivot + 1;
            else right = pivot;
        }
        return nums[left - 1] + k - missing(left - 1, nums);
    }

    int Solution::missingElement2(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > missing(n - 1, nums))
            return nums[n - 1] + k - missing(n - 1, nums);

        int left = 0, right = n -1, pivot;
        while(left != right) {
            pivot = left + (right - left) / 2;
            if(missing(pivot, nums) < k) left = pivot + 1;
            else right = pivot;
        }
        return nums[left - 1] + k - missing(left - 1, nums);
    }

}
