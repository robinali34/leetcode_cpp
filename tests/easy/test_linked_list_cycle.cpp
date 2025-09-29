#include <cassert>
#include <iostream>
#include "../../src/easy/linked_list_cycle/solution.h"
#include "../../src/easy/linked_list_cycle/solution.cpp"

using namespace std;

void test_linked_list_cycle() {
    LinkedListCycle::Solution solution;
    
    // Test case 1: No cycle
    ListNode* head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(-4);
    
    assert(solution.hasCycle(head1) == false);
    
    // Test case 2: With cycle
    ListNode* head2 = new ListNode(3);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(0);
    head2->next->next->next = new ListNode(-4);
    head2->next->next->next->next = head2->next; // Create cycle
    
    assert(solution.hasCycle(head2) == true);
    
    // Test case 3: Single node with cycle
    ListNode* head3 = new ListNode(1);
    head3->next = head3; // Self cycle
    
    assert(solution.hasCycle(head3) == true);
    
    // Test case 4: Single node without cycle
    ListNode* head4 = new ListNode(1);
    
    assert(solution.hasCycle(head4) == false);
    
    // Test case 5: Empty list
    assert(solution.hasCycle(nullptr) == false);
    
    // Test case 6: Two nodes with cycle
    ListNode* head5 = new ListNode(1);
    head5->next = new ListNode(2);
    head5->next->next = head5; // Cycle back to head
    
    assert(solution.hasCycle(head5) == true);
    
    cout << "All linked_list_cycle tests passed!" << endl;
}

int main() {
    test_linked_list_cycle();
    return 0;
}
