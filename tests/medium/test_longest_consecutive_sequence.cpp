#include <cassert>
#include <vector>
#include <iostream>
#include "../../src/medium/longest_consecutive_sequence/solution.h"
#include "../../src/medium/longest_consecutive_sequence/solution.cpp"

using namespace std;

void test_longest_consecutive_sequence() {
    LongestConsecutiveSequence::Solution solution;
    
    // Test case 1: Normal case
    vector<int> nums1 = {100, 4, 200, 1, 3, 2};
    assert(solution.longestConsecutive(nums1) == 4); // 1, 2, 3, 4
    
    // Test case 2: Another case
    vector<int> nums2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    assert(solution.longestConsecutive(nums2) == 9); // 0, 1, 2, 3, 4, 5, 6, 7, 8
    
    // Test case 3: Single element
    vector<int> nums3 = {1};
    assert(solution.longestConsecutive(nums3) == 1);
    
    // Test case 4: Empty array
    vector<int> nums4 = {};
    assert(solution.longestConsecutive(nums4) == 0);
    
    // Test case 5: No consecutive sequence
    vector<int> nums5 = {1, 3, 5, 7};
    assert(solution.longestConsecutive(nums5) == 1);
    
    // Test case 6: All same elements
    vector<int> nums6 = {1, 1, 1, 1};
    assert(solution.longestConsecutive(nums6) == 1);
    
    // Test case 7: Negative numbers
    vector<int> nums7 = {-1, 0, 1, 2, 3};
    assert(solution.longestConsecutive(nums7) == 5);
    
    cout << "All longest_consecutive_sequence tests passed!" << endl;
}

int main() {
    test_longest_consecutive_sequence();
    return 0;
}
