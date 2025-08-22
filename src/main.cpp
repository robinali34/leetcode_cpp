/*
 * Copyright 2021 Robina Li. MIT License
 * @file : main.cpp
 * @desc : Main executable demonstrating all LeetCode solutions
 */

#include <iostream>
#include <vector>
#include "easy/best_time_to_buy_and_sell_stock_ii/solution.h"
#include "easy/remove_duplicates_from_sorted_array/solution.h"
#include "medium/rotate_array/solution.h"

void testBestTimeToBuyAndSellStockII() {
    std::cout << "\n=== Testing Best Time to Buy and Sell Stock II ===" << std::endl;
    Solution solution;
    
    // Test case 1: [7,1,5,3,6,4] -> 7
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    std::cout << "Test 1: [7,1,5,3,6,4] -> Expected: 7, Got: " << result1 << std::endl;
    
    // Test case 2: [1,2,3,4,5] -> 4
    std::vector<int> prices2 = {1, 2, 3, 4, 5};
    int result2 = solution.maxProfit(prices2);
    std::cout << "Test 2: [1,2,3,4,5] -> Expected: 4, Got: " << result2 << std::endl;
    
    // Test case 3: [7,6,4,3,1] -> 0
    std::vector<int> prices3 = {7, 6, 4, 3, 1};
    int result3 = solution.maxProfit(prices3);
    std::cout << "Test 3: [7,6,4,3,1] -> Expected: 0, Got: " << result3 << std::endl;
}

void testRemoveDuplicates() {
    std::cout << "\n=== Testing Remove Duplicates from Sorted Array ===" << std::endl;
    Solution solution;
    
    // Test case 1: [1,1,2] -> 2, [1,2,_]
    std::vector<int> nums1 = {1, 1, 2};
    int result1 = solution.removeDuplicates(nums1);
    std::cout << "Test 1: [1,1,2] -> Expected: 2, Got: " << result1 << std::endl;
    std::cout << "Array after removal: [";
    for (int i = 0; i < result1; ++i) {
        std::cout << nums1[i];
        if (i < result1 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    // Test case 2: [0,0,1,1,1,2,2,3,3,4] -> 5, [0,1,2,3,4,_,_,_,_,_]
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result2 = solution.removeDuplicates(nums2);
    std::cout << "Test 2: [0,0,1,1,1,2,2,3,3,4] -> Expected: 5, Got: " << result2 << std::endl;
    std::cout << "Array after removal: [";
    for (int i = 0; i < result2; ++i) {
        std::cout << nums2[i];
        if (i < result2 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

void testRotateArray() {
    std::cout << "\n=== Testing Rotate Array ===" << std::endl;
    Solution solution;
    
    // Test case 1: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
    
    solution.rotate(nums1, 3);
    bool test1_passed = (nums1 == expected1);
    std::cout << "Test 1 (rotate): [1,2,3,4,5,6,7], k=3 -> " << (test1_passed ? "PASSED" : "FAILED") << std::endl;
    
    // Test case 2: [-1,-100,3,99], k=2 -> [3,99,-1,-100]
    std::vector<int> nums2 = {-1, -100, 3, 99};
    std::vector<int> expected2 = {3, 99, -1, -100};
    
    solution.rotate1(nums2, 2);
    bool test2_passed = (nums2 == expected2);
    std::cout << "Test 2 (rotate1): [-1,-100,3,99], k=2 -> " << (test2_passed ? "PASSED" : "FAILED") << std::endl;
    
    // Test case 3: [1,2,3], k=5 -> [2,3,1] (k % n = 2)
    std::vector<int> nums3 = {1, 2, 3};
    std::vector<int> expected3 = {2, 3, 1};
    
    solution.rotate(nums3, 5);
    bool test3_passed = (nums3 == expected3);
    std::cout << "Test 3 (rotate with k > n): [1,2,3], k=5 -> " << (test3_passed ? "PASSED" : "FAILED") << std::endl;
}

int main() {
    std::cout << "LeetCode Solutions in C++" << std::endl;
    std::cout << "=========================" << std::endl;
    
    try {
        testBestTimeToBuyAndSellStockII();
        testRemoveDuplicates();
        testRotateArray();
        
        std::cout << "\n=== All demonstrations completed successfully ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
        return 1;
    }
}
