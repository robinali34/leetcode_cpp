#include <cassert>
#include <iostream>
#include "../../src/easy/reverse_linked_list/solution.h"
#include "../../src/easy/reverse_linked_list/solution.cpp"

using namespace std;

void test_reverse_linked_list() {
    ReverseLinkedList::Solution solution;
    
    // Test case 1: Normal list
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);
    
    ListNode* result1 = solution.reverseList(head1);
    
    // Verify reversed list: 5->4->3->2->1
    assert(result1->val == 5);
    assert(result1->next->val == 4);
    assert(result1->next->next->val == 3);
    assert(result1->next->next->next->val == 2);
    assert(result1->next->next->next->next->val == 1);
    assert(result1->next->next->next->next->next == nullptr);
    
    // Test case 2: Single element
    ListNode* head2 = new ListNode(1);
    ListNode* result2 = solution.reverseList(head2);
    assert(result2->val == 1);
    assert(result2->next == nullptr);
    
    // Test case 3: Empty list
    assert(solution.reverseList(nullptr) == nullptr);
    
    // Test case 4: Two elements
    ListNode* head3 = new ListNode(1);
    head3->next = new ListNode(2);
    ListNode* result3 = solution.reverseList(head3);
    assert(result3->val == 2);
    assert(result3->next->val == 1);
    assert(result3->next->next == nullptr);
    
    cout << "All reverse_linked_list tests passed!" << endl;
}

int main() {
    test_reverse_linked_list();
    return 0;
}
