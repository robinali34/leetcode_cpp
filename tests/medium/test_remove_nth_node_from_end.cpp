#include <cassert>
#include <iostream>
#include "../../src/medium/remove_nth_node_from_end/solution.h"
#include "../../src/medium/remove_nth_node_from_end/solution.cpp"

using namespace std;

void test_remove_nth_node_from_end() {
    RemoveNthNodeFromEnd::Solution solution;
    
    // Test case 1: Remove second node from end
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);
    
    ListNode* result1 = solution.removeNthFromEnd(head1, 2);
    
    // Verify: 1->2->3->5
    assert(result1->val == 1);
    assert(result1->next->val == 2);
    assert(result1->next->next->val == 3);
    assert(result1->next->next->next->val == 5);
    assert(result1->next->next->next->next == nullptr);
    
    // Test case 2: Remove first node (n = length)
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = new ListNode(5);
    
    ListNode* result2 = solution.removeNthFromEnd(head2, 5);
    
    // Verify: 2->3->4->5
    assert(result2->val == 2);
    assert(result2->next->val == 3);
    assert(result2->next->next->val == 4);
    assert(result2->next->next->next->val == 5);
    assert(result2->next->next->next->next == nullptr);
    
    // Test case 3: Single node
    ListNode* head3 = new ListNode(1);
    ListNode* result3 = solution.removeNthFromEnd(head3, 1);
    assert(result3 == nullptr);
    
    // Test case 4: Two nodes, remove first
    ListNode* head4 = new ListNode(1);
    head4->next = new ListNode(2);
    ListNode* result4 = solution.removeNthFromEnd(head4, 2);
    assert(result4->val == 2);
    assert(result4->next == nullptr);
    
    // Test case 5: Two nodes, remove second
    ListNode* head5 = new ListNode(1);
    head5->next = new ListNode(2);
    ListNode* result5 = solution.removeNthFromEnd(head5, 1);
    assert(result5->val == 1);
    assert(result5->next == nullptr);
    
    cout << "All remove_nth_node_from_end tests passed!" << endl;
}

int main() {
    test_remove_nth_node_from_end();
    return 0;
}
