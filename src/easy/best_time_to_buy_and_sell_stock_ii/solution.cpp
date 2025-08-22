/*
 * Copyright 2021 Robina Li. BSD 3-Clause License All Rights Reserved.
 * @file : solution.cpp
 * @desc : Solution for Leetcode
 * Reference : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

#include "solution.h"
#include <algorithm>

int Solution::maxProfit(std::vector<int>& prices) {
    // Iterate all prices from idx 1, get max difference prices[idx] - prices[idx - 1]
    int profit = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        profit += std::max(0, prices[i] - prices[i - 1]);
    }
    return profit;
}
