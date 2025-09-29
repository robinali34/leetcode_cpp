#include <cassert>
#include <iostream>
#include "../../src/easy/remove_duplicates_from_sorted_list/solution.h"
#include "../../src/easy/remove_duplicates_from_sorted_list/solution.cpp"

using namespace std;

void test_remove_duplicates_from_sorted_list() {
    RemoveDuplicatesFromSortedList::Solution solution;
    
    // Test case 1: List with duplicates
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(1);
    head1->next->next = new ListNode(2);
    
    ListNode* result1 = solution.deleteDuplicates(head1);
    
    // Verify: 1->2
    assert(result1->val == 1);
    assert(result1->next->val == 2);
    assert(result1->next->next == nullptr);
    
    // Test case 2: List with multiple duplicates
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(1);
    head2->next->next = new ListNode(2);
    head2->next->next->next = new ListNode(3);
    head2->next->next->next->next = new ListNode(3);
    
    ListNode* result2 = solution.deleteDuplicates(head2);
    
    // Verify: 1->2->3
    assert(result2->val == 1);
    assert(result2->next->val == 2);
    assert(result2->next->next->val == 3);
    assert(result2->next->next->next == nullptr);
    
    // Test case 3: Single element
    ListNode* head3 = new ListNode(1);
    ListNode* result3 = solution.deleteDuplicates(head3);
    assert(result3->val == 1);
    assert(result3->next == nullptr);
    
    // Test case 4: Empty list
    assert(solution.deleteDuplicates(nullptr) == nullptr);
    
    // Test case 5: All same elements
    ListNode* head4 = new ListNode(1);
    head4->next = new ListNode(1);
    head4->next->next = new ListNode(1);
    
    ListNode* result4 = solution.deleteDuplicates(head4);
    assert(result4->val == 1);
    assert(result4->next == nullptr);
    
    cout << "All remove_duplicates_from_sorted_list tests passed!" << endl;
}

int main() {
    test_remove_duplicates_from_sorted_list();
    return 0;
}
