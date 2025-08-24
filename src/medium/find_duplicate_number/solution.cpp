/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Find Duplicate Number
 * Reference : https://leetcode.com/problems/find-the-duplicate-number/
 */

#include "solution.h"

using namespace std;

namespace FindDuplicateNumber {

int Solution::findDuplicate(vector<int>& nums) {
    // Floyd's Tortoise and Hare algorithm
    int slow = nums[0];
    int fast = nums[0];
    
    // Find intersection point
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    
    // Find entrance to cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    
    return slow;
}

}
