/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Binary Search
 * Reference : https://leetcode.com/problems/binary-search/
 */

#include "solution.h"

using namespace std;

namespace BinarySearch {

int Solution::search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while(left <= right) {
        int pivot = left + (right - left) / 2;
        if(nums[pivot] == target) return pivot;
        if (nums[pivot] < target) left = pivot + 1;
        else right = pivot - 1;
    }
    return -1;
}

}
