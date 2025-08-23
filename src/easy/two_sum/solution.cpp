/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Two Sum
 * Reference : https://leetcode.com/problems/two-sum/
 */

#include "solution.h"
#include <unordered_map>

using namespace std;

namespace TwoSum {

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        int pair = target - nums[i];
        if (hash.find(pair) != hash.end()) {
            return {i, hash[pair]};
        }
        hash[nums[i]] = i;
    }
    return {};
}

}
