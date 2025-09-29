#include <cassert>
#include <iostream>
#include "../../src/easy/merge_two_sorted_lists/solution.h"
#include "../../src/easy/merge_two_sorted_lists/solution.cpp"

using namespace std;

void test_merge_two_sorted_lists() {
    MergeTwoSortedLists::Solution solution;
    
    // Test case 1: Normal merge
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    
    ListNode* result1 = solution.mergeTwoLists(list1, list2);
    
    // Verify the merged list: 1->1->2->3->4->4
    assert(result1->val == 1);
    assert(result1->next->val == 1);
    assert(result1->next->next->val == 2);
    assert(result1->next->next->next->val == 3);
    assert(result1->next->next->next->next->val == 4);
    assert(result1->next->next->next->next->next->val == 4);
    assert(result1->next->next->next->next->next->next == nullptr);
    
    // Test case 2: Empty lists
    assert(solution.mergeTwoLists(nullptr, nullptr) == nullptr);
    
    // Test case 3: One empty list
    ListNode* list3 = new ListNode(0);
    ListNode* result2 = solution.mergeTwoLists(list3, nullptr);
    assert(result2->val == 0);
    assert(result2->next == nullptr);
    
    // Test case 4: Single element lists
    ListNode* list4 = new ListNode(1);
    ListNode* list5 = new ListNode(2);
    ListNode* result3 = solution.mergeTwoLists(list4, list5);
    assert(result3->val == 1);
    assert(result3->next->val == 2);
    assert(result3->next->next == nullptr);
    
    cout << "All merge_two_sorted_lists tests passed!" << endl;
}

int main() {
    test_merge_two_sorted_lists();
    return 0;
}
