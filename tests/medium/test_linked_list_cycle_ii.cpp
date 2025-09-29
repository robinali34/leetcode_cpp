#include <cassert>
#include <iostream>
#include "../../src/medium/linked_list_cycle_ii/solution.h"
#include "../../src/medium/linked_list_cycle_ii/solution.cpp"

using namespace std;

void test_linked_list_cycle_ii() {
    LinkedListCycleII::Solution solution;
    
    // Test case 1: No cycle
    ListNode* head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(-4);
    
    assert(solution.detectCycle(head1) == nullptr);
    
    // Test case 2: With cycle
    ListNode* head2 = new ListNode(3);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(0);
    ListNode* node4 = new ListNode(-4);
    
    head2->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // Create cycle at node2
    
    assert(solution.detectCycle(head2) == node2);
    
    // Test case 3: Single node with cycle
    ListNode* head3 = new ListNode(1);
    head3->next = head3; // Self cycle
    
    assert(solution.detectCycle(head3) == head3);
    
    // Test case 4: Single node without cycle
    ListNode* head4 = new ListNode(1);
    assert(solution.detectCycle(head4) == nullptr);
    
    // Test case 5: Empty list
    assert(solution.detectCycle(nullptr) == nullptr);
    
    // Test case 6: Two nodes with cycle
    ListNode* head5 = new ListNode(1);
    ListNode* node5 = new ListNode(2);
    head5->next = node5;
    node5->next = head5; // Cycle back to head
    
    assert(solution.detectCycle(head5) == head5);
    
    cout << "All linked_list_cycle_ii tests passed!" << endl;
}

int main() {
    test_linked_list_cycle_ii();
    return 0;
}
