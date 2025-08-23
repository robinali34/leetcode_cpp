/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Best Time to Buy and Sell Stock
 * Reference : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */

#include "solution.h"
#include <algorithm>

namespace BestTimeToBuyAndSellStock {

int Solution::maxProfit(std::vector<int>& prices) {
    if (prices.empty()) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    
    return maxProfit;
}

}
