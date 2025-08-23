/*
 * Copyright 2021 Robina Li. MIT License
 * @file : main.cpp
 * @desc : Main executable demonstrating all LeetCode solutions
 */

#include <iostream>
#include <vector>
#include <string>
#include "easy/best_time_to_buy_and_sell_stock_ii/solution.h"
#include "easy/remove_duplicates_from_sorted_array/solution.h"
#include "easy/two_sum/solution.h"
#include "easy/best_time_to_buy_and_sell_stock/solution.h"
#include "easy/valid_anagram/solution.h"
#include "medium/rotate_array/solution.h"
#include "medium/maximum_subarray/solution.h"
#include "medium/product_of_array_except_self/solution.h"
#include "medium/maximum_product_subarray/solution.h"
#include "medium/merge_intervals/solution.h"
#include "medium/insert_interval/solution.h"
#include "medium/non_overlapping_intervals/solution.h"
#include "medium/longest_substring_without_repeating_characters/solution.h"

void testBestTimeToBuyAndSellStockII() {
    std::cout << "\n=== Testing Best Time to Buy and Sell Stock II ===" << std::endl;
    BestTimeToBuyAndSellStockII::Solution solution;
    
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
    RemoveDuplicatesFromSortedArray::Solution solution;
    
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
    RotateArray::Solution solution;
    
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

void testTwoSum() {
    std::cout << "\n=== Testing Two Sum ===" << std::endl;
    TwoSum::Solution solution;
    
    // Test case 1: [2,7,11,15], target = 9
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = solution.twoSum(nums1, target1);
    std::cout << "Test 1: [2,7,11,15], target=9 -> [" << result1[0] << "," << result1[1] << "]" << std::endl;
    
    // Test case 2: [3,2,4], target = 6
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = solution.twoSum(nums2, target2);
    std::cout << "Test 2: [3,2,4], target=6 -> [" << result2[0] << "," << result2[1] << "]" << std::endl;
}

void testBestTimeToBuyAndSellStock() {
    std::cout << "\n=== Testing Best Time to Buy and Sell Stock ===" << std::endl;
    BestTimeToBuyAndSellStock::Solution solution;
    
    // Test case 1: [7,1,5,3,6,4] -> 5
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    std::cout << "Test 1: [7,1,5,3,6,4] -> Expected: 5, Got: " << result1 << std::endl;
    
    // Test case 2: [7,6,4,3,1] -> 0
    std::vector<int> prices2 = {7, 6, 4, 3, 1};
    int result2 = solution.maxProfit(prices2);
    std::cout << "Test 2: [7,6,4,3,1] -> Expected: 0, Got: " << result2 << std::endl;
}

void testValidAnagram() {
    std::cout << "\n=== Testing Valid Anagram ===" << std::endl;
    ValidAnagram::Solution solution;
    
    // Test case 1: "anagram" vs "nagaram"
    std::string s1 = "anagram";
    std::string t1 = "nagaram";
    bool result1 = solution.isAnagram(s1, t1);
    std::cout << "Test 1: \"anagram\" vs \"nagaram\" -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: "rat" vs "car"
    std::string s2 = "rat";
    std::string t2 = "car";
    bool result2 = solution.isAnagram(s2, t2);
    std::cout << "Test 2: \"rat\" vs \"car\" -> " << (result2 ? "true" : "false") << std::endl;
}

void testMaximumSubarray() {
    std::cout << "\n=== Testing Maximum Subarray ===" << std::endl;
    MaximumSubarray::Solution solution;
    
    // Test case 1: [-2,1,-3,4,-1,2,1,-5,4] -> 6
    std::vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result1 = solution.maxSubArray(nums1);
    std::cout << "Test 1: [-2,1,-3,4,-1,2,1,-5,4] -> Expected: 6, Got: " << result1 << std::endl;
    
    // Test case 2: [5,4,-1,7,8] -> 23
    std::vector<int> nums2 = {5, 4, -1, 7, 8};
    int result2 = solution.maxSubArray(nums2);
    std::cout << "Test 2: [5,4,-1,7,8] -> Expected: 23, Got: " << result2 << std::endl;
}

void testProductOfArrayExceptSelf() {
    std::cout << "\n=== Testing Product of Array Except Self ===" << std::endl;
    ProductOfArrayExceptSelf::Solution solution;
    
    // Test case 1: [1,2,3,4] -> [24,12,8,6]
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> result1 = solution.productExceptSelf(nums1);
    std::cout << "Test 1: [1,2,3,4] -> [";
    for (int i = 0; i < result1.size(); ++i) {
        std::cout << result1[i];
        if (i < result1.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

void testMaximumProductSubarray() {
    std::cout << "\n=== Testing Maximum Product Subarray ===" << std::endl;
    MaximumProductSubarray::Solution solution;
    
    // Test case 1: [2,3,-2,4] -> 6
    std::vector<int> nums1 = {2, 3, -2, 4};
    int result1 = solution.maxProduct(nums1);
    std::cout << "Test 1: [2,3,-2,4] -> Expected: 6, Got: " << result1 << std::endl;
    
    // Test case 2: [-2,3,-4] -> 24
    std::vector<int> nums2 = {-2, 3, -4};
    int result2 = solution.maxProduct(nums2);
    std::cout << "Test 2: [-2,3,-4] -> Expected: 24, Got: " << result2 << std::endl;
}

void testMergeIntervals() {
    std::cout << "\n=== Testing Merge Intervals ===" << std::endl;
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    std::vector<std::vector<int>> result1 = solution.merge(intervals1);
    std::cout << "Test 1: [[1,3],[2,6],[8,10],[15,18]] -> ";
    for (const auto& interval : result1) {
        std::cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    std::cout << std::endl;
}

void testInsertInterval() {
    std::cout << "\n=== Testing Insert Interval ===" << std::endl;
    InsertInterval::Solution solution;
    
    // Test case 1: intervals = [[1,3],[6,9]], newInterval = [2,5]
    std::vector<std::vector<int>> intervals1 = {{1,3}, {6,9}};
    std::vector<int> newInterval1 = {2, 5};
    std::vector<std::vector<int>> result1 = solution.insert(intervals1, newInterval1);
    std::cout << "Test 1: [[1,3],[6,9]] + [2,5] -> ";
    for (const auto& interval : result1) {
        std::cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    std::cout << std::endl;
}

void testNonOverlappingIntervals() {
    std::cout << "\n=== Testing Non-overlapping Intervals ===" << std::endl;
    NonOverlappingIntervals::Solution solution;
    
    // Test case 1: [[1,2],[2,3],[3,4],[1,3]] -> 1
    std::vector<std::vector<int>> intervals1 = {{1,2}, {2,3}, {3,4}, {1,3}};
    int result1 = solution.eraseOverlapIntervals(intervals1);
    std::cout << "Test 1: [[1,2],[2,3],[3,4],[1,3]] -> Expected: 1, Got: " << result1 << std::endl;
}

void testLongestSubstringWithoutRepeatingCharacters() {
    std::cout << "\n=== Testing Longest Substring Without Repeating Characters ===" << std::endl;
    LongestSubstringWithoutRepeatingCharacters::Solution solution;
    
    // Test case 1: "abcabcbb" -> 3
    std::string s1 = "abcabcbb";
    int result1 = solution.lengthOfLongestSubstring(s1);
    std::cout << "Test 1: \"abcabcbb\" -> Expected: 3, Got: " << result1 << std::endl;
    
    // Test case 2: "pwwkew" -> 3
    std::string s2 = "pwwkew";
    int result2 = solution.lengthOfLongestSubstring(s2);
    std::cout << "Test 2: \"pwwkew\" -> Expected: 3, Got: " << result2 << std::endl;
}

int main() {
    std::cout << "LeetCode Solutions in C++" << std::endl;
    std::cout << "=========================" << std::endl;
    
    try {
        testTwoSum();
        testBestTimeToBuyAndSellStock();
        testBestTimeToBuyAndSellStockII();
        testRemoveDuplicates();
        testValidAnagram();
        testRotateArray();
        testMaximumSubarray();
        testProductOfArrayExceptSelf();
        testMaximumProductSubarray();
        testMergeIntervals();
        testInsertInterval();
        testNonOverlappingIntervals();
        testLongestSubstringWithoutRepeatingCharacters();
        
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
