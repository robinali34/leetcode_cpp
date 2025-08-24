/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_best_time_to_buy_and_sell_stock_ii.cpp
 * @desc : Test file for Best Time to Buy and Sell Stock II solution
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/easy/best_time_to_buy_and_sell_stock_ii/solution.cpp"

void testMaxProfit() {
    BestTimeToBuyAndSellStockII::Solution solution;
    
    // Test case 1: [7,1,5,3,6,4] -> 7
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    assert(result1 == 7);
    std::cout << "Test 1 PASSED: [7,1,5,3,6,4] -> 7" << std::endl;
    
    // Test case 2: [1,2,3,4,5] -> 4
    std::vector<int> prices2 = {1, 2, 3, 4, 5};
    int result2 = solution.maxProfit(prices2);
    assert(result2 == 4);
    std::cout << "Test 2 PASSED: [1,2,3,4,5] -> 4" << std::endl;
    
    // Test case 3: [7,6,4,3,1] -> 0
    std::vector<int> prices3 = {7, 6, 4, 3, 1};
    int result3 = solution.maxProfit(prices3);
    assert(result3 == 0);
    std::cout << "Test 3 PASSED: [7,6,4,3,1] -> 0" << std::endl;
    
    // Test case 4: [1,5,3,6,4] -> 7
    std::vector<int> prices4 = {1, 5, 3, 6, 4};
    int result4 = solution.maxProfit(prices4);
    assert(result4 == 7);
    std::cout << "Test 4 PASSED: [1,5,3,6,4] -> 7" << std::endl;
    
    // Test case 5: Empty array -> 0
    std::vector<int> prices5 = {};
    int result5 = solution.maxProfit(prices5);
    assert(result5 == 0);
    std::cout << "Test 5 PASSED: [] -> 0" << std::endl;
    
    // Test case 6: Single element -> 0
    std::vector<int> prices6 = {5};
    int result6 = solution.maxProfit(prices6);
    assert(result6 == 0);
    std::cout << "Test 6 PASSED: [5] -> 0" << std::endl;
    
    std::cout << "All tests for maxProfit PASSED!" << std::endl;
}

int main() {
    try {
        testMaxProfit();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Test failed with unknown exception" << std::endl;
        return 1;
    }
}
