/*
 * Copyright 2025 Robina Li. MIT License
 * @file : main.cpp
 * @desc : Main executable demonstrating all LeetCode solutions
 */

#include <iostream>
#include <vector>
#include <string>
#include "easy/best_time_to_buy_and_sell_stock_ii/solution.h"

using namespace std;
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
    cout << "\n=== Testing Best Time to Buy and Sell Stock II ===" << endl;
    BestTimeToBuyAndSellStockII::Solution solution;
    
    // Test case 1: [7,1,5,3,6,4] -> 7
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    cout << "Test 1: [7,1,5,3,6,4] -> Expected: 7, Got: " << result1 << endl;
    
    // Test case 2: [1,2,3,4,5] -> 4
    vector<int> prices2 = {1, 2, 3, 4, 5};
    int result2 = solution.maxProfit(prices2);
    cout << "Test 2: [1,2,3,4,5] -> Expected: 4, Got: " << result2 << endl;
    
    // Test case 3: [7,6,4,3,1] -> 0
    vector<int> prices3 = {7, 6, 4, 3, 1};
    int result3 = solution.maxProfit(prices3);
    cout << "Test 3: [7,6,4,3,1] -> Expected: 0, Got: " << result3 << endl;
}

void testRemoveDuplicates() {
    cout << "\n=== Testing Remove Duplicates from Sorted Array ===" << endl;
    RemoveDuplicatesFromSortedArray::Solution solution;
    
    // Test case 1: [1,1,2] -> 2, [1,2,_]
    vector<int> nums1 = {1, 1, 2};
    int result1 = solution.removeDuplicates(nums1);
    cout << "Test 1: [1,1,2] -> Expected: 2, Got: " << result1 << endl;
    cout << "Array after removal: [";
    for (int i = 0; i < result1; ++i) {
        cout << nums1[i];
        if (i < result1 - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    // Test case 2: [0,0,1,1,1,2,2,3,3,4] -> 5, [0,1,2,3,4,_,_,_,_,_]
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result2 = solution.removeDuplicates(nums2);
    cout << "Test 2: [0,0,1,1,1,2,2,3,3,4] -> Expected: 5, Got: " << result2 << endl;
    cout << "Array after removal: [";
    for (int i = 0; i < result2; ++i) {
        cout << nums2[i];
        if (i < result2 - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void testRotateArray() {
    cout << "\n=== Testing Rotate Array ===" << endl;
    RotateArray::Solution solution;
    
    // Test case 1: [1,2,3,4,5,6,7], k=3 -> [5,6,7,1,2,3,4]
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
    
    solution.rotate(nums1, 3);
    bool test1_passed = (nums1 == expected1);
    cout << "Test 1 (rotate): [1,2,3,4,5,6,7], k=3 -> " << (test1_passed ? "PASSED" : "FAILED") << endl;
    
    // Test case 2: [-1,-100,3,99], k=2 -> [3,99,-1,-100]
    vector<int> nums2 = {-1, -100, 3, 99};
    vector<int> expected2 = {3, 99, -1, -100};
    
    solution.rotate1(nums2, 2);
    bool test2_passed = (nums2 == expected2);
    cout << "Test 2 (rotate1): [-1,-100,3,99], k=2 -> " << (test2_passed ? "PASSED" : "FAILED") << endl;
    
    // Test case 3: [1,2,3], k=5 -> [2,3,1] (k % n = 2)
    vector<int> nums3 = {1, 2, 3};
    vector<int> expected3 = {2, 3, 1};
    
    solution.rotate(nums3, 5);
    bool test3_passed = (nums3 == expected3);
    cout << "Test 3 (rotate with k > n): [1,2,3], k=5 -> " << (test3_passed ? "PASSED" : "FAILED") << endl;
}

void testTwoSum() {
    cout << "\n=== Testing Two Sum ===" << endl;
    TwoSum::Solution solution;
    
    // Test case 1: [2,7,11,15], target = 9
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Test 1: [2,7,11,15], target=9 -> [" << result1[0] << "," << result1[1] << "]" << endl;
    
    // Test case 2: [3,2,4], target = 6
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Test 2: [3,2,4], target=6 -> [" << result2[0] << "," << result2[1] << "]" << endl;
}

void testBestTimeToBuyAndSellStock() {
    cout << "\n=== Testing Best Time to Buy and Sell Stock ===" << endl;
    BestTimeToBuyAndSellStock::Solution solution;
    
    // Test case 1: [7,1,5,3,6,4] -> 5
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    cout << "Test 1: [7,1,5,3,6,4] -> Expected: 5, Got: " << result1 << endl;
    
    // Test case 2: [7,6,4,3,1] -> 0
    vector<int> prices2 = {7, 6, 4, 3, 1};
    int result2 = solution.maxProfit(prices2);
    cout << "Test 2: [7,6,4,3,1] -> Expected: 0, Got: " << result2 << endl;
}

void testValidAnagram() {
    cout << "\n=== Testing Valid Anagram ===" << endl;
    ValidAnagram::Solution solution;
    
    // Test case 1: "anagram" vs "nagaram"
    string s1 = "anagram";
    string t1 = "nagaram";
    bool result1 = solution.isAnagram(s1, t1);
    cout << "Test 1: \"anagram\" vs \"nagaram\" -> " << (result1 ? "true" : "false") << endl;
    
    // Test case 2: "rat" vs "car"
    string s2 = "rat";
    string t2 = "car";
    bool result2 = solution.isAnagram(s2, t2);
    cout << "Test 2: \"rat\" vs \"car\" -> " << (result2 ? "true" : "false") << endl;
}

void testMaximumSubarray() {
    cout << "\n=== Testing Maximum Subarray ===" << endl;
    MaximumSubarray::Solution solution;
    
    // Test case 1: [-2,1,-3,4,-1,2,1,-5,4] -> 6
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result1 = solution.maxSubArray(nums1);
    cout << "Test 1: [-2,1,-3,4,-1,2,1,-5,4] -> Expected: 6, Got: " << result1 << endl;
    
    // Test case 2: [5,4,-1,7,8] -> 23
    vector<int> nums2 = {5, 4, -1, 7, 8};
    int result2 = solution.maxSubArray(nums2);
    cout << "Test 2: [5,4,-1,7,8] -> Expected: 23, Got: " << result2 << endl;
}

void testProductOfArrayExceptSelf() {
    cout << "\n=== Testing Product of Array Except Self ===" << endl;
    ProductOfArrayExceptSelf::Solution solution;
    
    // Test case 1: [1,2,3,4] -> [24,12,8,6]
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> result1 = solution.productExceptSelf(nums1);
    cout << "Test 1: [1,2,3,4] -> [";
    for (int i = 0; i < result1.size(); ++i) {
        cout << result1[i];
        if (i < result1.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

void testMaximumProductSubarray() {
    cout << "\n=== Testing Maximum Product Subarray ===" << endl;
    MaximumProductSubarray::Solution solution;
    
    // Test case 1: [2,3,-2,4] -> 6
    vector<int> nums1 = {2, 3, -2, 4};
    int result1 = solution.maxProduct(nums1);
    cout << "Test 1: [2,3,-2,4] -> Expected: 6, Got: " << result1 << endl;
    
    // Test case 2: [-2,3,-4] -> 24
    vector<int> nums2 = {-2, 3, -4};
    int result2 = solution.maxProduct(nums2);
    cout << "Test 2: [-2,3,-4] -> Expected: 24, Got: " << result2 << endl;
}

void testMergeIntervals() {
    cout << "\n=== Testing Merge Intervals ===" << endl;
    MergeIntervals::Solution solution;
    
    // Test case 1: [[1,3],[2,6],[8,10],[15,18]]
    vector<vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> result1 = solution.merge(intervals1);
    cout << "Test 1 (merge): [[1,3],[2,6],[8,10],[15,18]] -> ";
    for (const auto& interval : result1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    
    // Test case 2: [[1,4],[4,5]]
    vector<vector<int>> intervals2 = {{1,4}, {4,5}};
    vector<vector<int>> result2 = solution.merge2(intervals2);
    cout << "Test 2 (merge2): [[1,4],[4,5]] -> ";
    for (const auto& interval : result2) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    
    // Test case 3: [[1,3],[2,6],[8,10],[15,18]] using graph approach
    vector<vector<int>> intervals3 = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> result3 = solution.mergeGraph(intervals3);
    cout << "Test 3 (mergeGraph): [[1,3],[2,6],[8,10],[15,18]] -> ";
    for (const auto& interval : result3) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    
    // Test case 4: [[1,4],[4,5]] using concise approach
    vector<vector<int>> intervals4 = {{1,4}, {4,5}};
    vector<vector<int>> result4 = solution.mergeConcise(intervals4);
    cout << "Test 4 (mergeConcise): [[1,4],[4,5]] -> ";
    for (const auto& interval : result4) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
}

void testInsertInterval() {
    cout << "\n=== Testing Insert Interval ===" << endl;
    InsertInterval::Solution solution;
    
    // Test case 1: intervals = [[1,3],[6,9]], newInterval = [2,5]
    vector<vector<int>> intervals1 = {{1,3}, {6,9}};
    vector<int> newInterval1 = {2, 5};
    vector<vector<int>> result1 = solution.insert(intervals1, newInterval1);
    cout << "Test 1 (insert): [[1,3],[6,9]] + [2,5] -> ";
    for (const auto& interval : result1) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    
    // Test case 2: using insert2 method
    vector<vector<int>> result2 = solution.insert2(intervals1, newInterval1);
    cout << "Test 1 (insert2): [[1,3],[6,9]] + [2,5] -> ";
    for (const auto& interval : result2) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
}

void testNonOverlappingIntervals() {
    cout << "\n=== Testing Non-overlapping Intervals ===" << endl;
    NonOverlappingIntervals::Solution solution;
    
    // Test case 1: [[1,2],[2,3],[3,4],[1,3]] -> 1
    vector<vector<int>> intervals1 = {{1,2}, {2,3}, {3,4}, {1,3}};
    int result1 = solution.eraseOverlapIntervals(intervals1);
    cout << "Test 1: [[1,2],[2,3],[3,4],[1,3]] -> Expected: 1, Got: " << result1 << endl;
}

void testLongestSubstringWithoutRepeatingCharacters() {
    cout << "\n=== Testing Longest Substring Without Repeating Characters ===" << endl;
    LongestSubstringWithoutRepeatingCharacters::Solution solution;
    
    // Test case 1: "abcabcbb" -> 3
    string s1 = "abcabcbb";
    int result1 = solution.lengthOfLongestSubstring(s1);
    cout << "Test 1: \"abcabcbb\" -> Expected: 3, Got: " << result1 << endl;
    
    // Test case 2: "pwwkew" -> 3
    string s2 = "pwwkew";
    int result2 = solution.lengthOfLongestSubstring(s2);
    cout << "Test 2: \"pwwkew\" -> Expected: 3, Got: " << result2 << endl;
}

int main() {
    cout << "LeetCode Solutions in C++" << endl;
    cout << "=========================" << endl;
    
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
        
        cout << "\n=== All demonstrations completed successfully ===" << endl;
        return 0;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    } catch (...) {
        cerr << "Unknown error occurred" << endl;
        return 1;
    }
}
