/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Contains Duplicate
 * Reference : https://leetcode.com/problems/contains-duplicate/
 */

#include "solution.h"
#include <unordered_set>

using namespace std;

namespace ContainsDuplicate {

bool Solution::containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    
    return false;
}

}
