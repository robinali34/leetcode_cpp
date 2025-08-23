/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Leetcode
 * Reference : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */

#include "solution.h"
#include <algorithm>
#include <climits>
using namespace std;

int BestTimeToBuyAndSellStockII::Solution::maxProfit(std::vector<int>& prices) {
    int minprice = INT_MAX;
    int maxprofit = 0;
    for (int i = 0; i < prices.size(); i++) {
        if(prices[i] < minprice)
            minprice = prices[i];
        else if (prices[i] - minprice > maxprofit)
            maxprofit = prices[i] - minprice;
    }
    return maxprofit;
}
