/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Leetcode
 * Reference : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

#include "solution.h"
#include <algorithm>
#include <climits>
using namespace std;

int BestTimeToBuyAndSellStockII::Solution::maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    for (size_t i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i-1]) {
            maxprofit += prices[i] - prices[i-1];
        }
    }
    return maxprofit;
}
