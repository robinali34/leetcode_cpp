/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_best_time_to_buy_and_sell_stock.cpp
 * @desc : Test file for Best Time to Buy and Sell Stock
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/best_time_to_buy_and_sell_stock/solution.h"
#include "../../src/easy/best_time_to_buy_and_sell_stock/solution.cpp"

void testMaxProfit() {
    BestTimeToBuyAndSellStock::Solution solution;
    
    // Test case 1: [7,1,5,3,6,4]
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    assert(result1 == 5);
    std::cout << "Test 1 PASSED: [7,1,5,3,6,4] -> " << result1 << std::endl;
    
    // Test case 2: [7,6,4,3,1]
    std::vector<int> prices2 = {7, 6, 4, 3, 1};
    int result2 = solution.maxProfit(prices2);
    assert(result2 == 0);
    std::cout << "Test 2 PASSED: [7,6,4,3,1] -> " << result2 << std::endl;
    
    // Test case 3: [1,2,3,4,5]
    std::vector<int> prices3 = {1, 2, 3, 4, 5};
    int result3 = solution.maxProfit(prices3);
    assert(result3 == 4);
    std::cout << "Test 3 PASSED: [1,2,3,4,5] -> " << result3 << std::endl;
    
    // Test case 4: Empty array
    std::vector<int> prices4 = {};
    int result4 = solution.maxProfit(prices4);
    assert(result4 == 0);
    std::cout << "Test 4 PASSED: [] -> " << result4 << std::endl;
}

int main() {
    try {
        testMaxProfit();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
