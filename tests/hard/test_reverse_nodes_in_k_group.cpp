#include <cassert>
#include <iostream>
#include "../../src/hard/reverse_nodes_in_k_group/solution.h"
#include "../../src/hard/reverse_nodes_in_k_group/solution.cpp"

using namespace std;

void test_reverse_nodes_in_k_group() {
    ReverseNodesInKGroup::Solution solution;
    
    // Test case 1: Normal case
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);
    
    ListNode* result1 = solution.reverseKGroup(head1, 2);
    
    // Verify: 2->1->4->3->5
    assert(result1->val == 2);
    assert(result1->next->val == 1);
    assert(result1->next->next->val == 4);
    assert(result1->next->next->next->val == 3);
    assert(result1->next->next->next->next->val == 5);
    assert(result1->next->next->next->next->next == nullptr);
    
    // Test case 2: k = 3
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = new ListNode(5);
    
    ListNode* result2 = solution.reverseKGroup(head2, 3);
    
    // Verify: 3->2->1->4->5
    assert(result2->val == 3);
    assert(result2->next->val == 2);
    assert(result2->next->next->val == 1);
    assert(result2->next->next->next->val == 4);
    assert(result2->next->next->next->next->val == 5);
    assert(result2->next->next->next->next->next == nullptr);
    
    // Test case 3: k = 1 (no change)
    ListNode* head3 = new ListNode(1);
    head3->next = new ListNode(2);
    head3->next->next = new ListNode(3);
    head3->next->next->next = new ListNode(4);
    head3->next->next->next->next = new ListNode(5);
    
    ListNode* result3 = solution.reverseKGroup(head3, 1);
    
    // Verify: 1->2->3->4->5 (unchanged)
    assert(result3->val == 1);
    assert(result3->next->val == 2);
    assert(result3->next->next->val == 3);
    assert(result3->next->next->next->val == 4);
    assert(result3->next->next->next->next->val == 5);
    assert(result3->next->next->next->next->next == nullptr);
    
    // Test case 4: k = length of list
    ListNode* head4 = new ListNode(1);
    head4->next = new ListNode(2);
    head4->next->next = new ListNode(3);
    head4->next->next->next = new ListNode(4);
    head4->next->next->next->next = new ListNode(5);
    
    ListNode* result4 = solution.reverseKGroup(head4, 5);
    
    // Verify: 5->4->3->2->1
    assert(result4->val == 5);
    assert(result4->next->val == 4);
    assert(result4->next->next->val == 3);
    assert(result4->next->next->next->val == 2);
    assert(result4->next->next->next->next->val == 1);
    assert(result4->next->next->next->next->next == nullptr);
    
    // Test case 5: Single element
    ListNode* head5 = new ListNode(1);
    ListNode* result5 = solution.reverseKGroup(head5, 1);
    assert(result5->val == 1);
    assert(result5->next == nullptr);
    
    cout << "All reverse_nodes_in_k_group tests passed!" << endl;
}

int main() {
    test_reverse_nodes_in_k_group();
    return 0;
}
