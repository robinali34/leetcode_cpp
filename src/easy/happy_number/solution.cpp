/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Happy Number
 * Reference : https://leetcode.com/problems/happy-number/
 */

#include "solution.h"
#include <unordered_set>

using namespace std;

bool Solution::isHappy(int n) {
    unordered_set<int> seen;
    
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    
    return n == 1;
}
