#include <cassert>
#include <vector>
#include <set>
#include <iostream>
#include "../../src/medium/top_k_frequent_elements/solution.h"
#include "../../src/medium/top_k_frequent_elements/solution.cpp"

using namespace std;

void test_top_k_frequent_elements() {
    TopKFrequentElements::Solution solution;
    
    // Test case 1: Normal case
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    vector<int> result1 = solution.topKFrequent(nums1, 2);
    
    // Should return [1, 2] (most frequent elements)
    assert(result1.size() == 2);
    set<int> expected1 = {1, 2};
    set<int> actual1(result1.begin(), result1.end());
    assert(actual1 == expected1);
    
    // Test case 2: Single element
    vector<int> nums2 = {1};
    vector<int> result2 = solution.topKFrequent(nums2, 1);
    assert(result2.size() == 1);
    assert(result2[0] == 1);
    
    // Test case 3: All same elements
    vector<int> nums3 = {1, 1, 1, 1};
    vector<int> result3 = solution.topKFrequent(nums3, 1);
    assert(result3.size() == 1);
    assert(result3[0] == 1);
    
    // Test case 4: k equals array length
    vector<int> nums4 = {1, 2, 3};
    vector<int> result4 = solution.topKFrequent(nums4, 3);
    assert(result4.size() == 3);
    set<int> expected4 = {1, 2, 3};
    set<int> actual4(result4.begin(), result4.end());
    assert(actual4 == expected4);
    
    // Test case 5: Negative numbers
    vector<int> nums5 = {-1, -1, 0, 0, 0};
    vector<int> result5 = solution.topKFrequent(nums5, 2);
    assert(result5.size() == 2);
    set<int> expected5 = {0, -1};
    set<int> actual5(result5.begin(), result5.end());
    assert(actual5 == expected5);
    
    cout << "All top_k_frequent_elements tests passed!" << endl;
}

int main() {
    test_top_k_frequent_elements();
    return 0;
}
