#include <cassert>
#include <iostream>
#include "../../src/medium/add_two_numbers/solution.h"
#include "../../src/medium/add_two_numbers/solution.cpp"
 
using namespace std;

void test_add_two_numbers() {
    AddTwoNumbers::Solution solution;
    
    // Test case 1: Normal addition
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    ListNode* result1 = solution.addTwoNumbers(l1, l2);
    
    // Verify: 7->0->8 (342 + 465 = 807)
    assert(result1->val == 7);
    assert(result1->next->val == 0);
    assert(result1->next->next->val == 8);
    assert(result1->next->next->next == nullptr);
    
    // Test case 2: Different lengths
    ListNode* l3 = new ListNode(0);
    ListNode* l4 = new ListNode(0);
    ListNode* result2 = solution.addTwoNumbers(l3, l4);
    assert(result2->val == 0);
    assert(result2->next == nullptr);
    
    // Test case 3: Carry over
    ListNode* l5 = new ListNode(9);
    l5->next = new ListNode(9);
    l5->next->next = new ListNode(9);
    l5->next->next->next = new ListNode(9);
    l5->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next->next = new ListNode(9);
    
    ListNode* l6 = new ListNode(9);
    l6->next = new ListNode(9);
    l6->next->next = new ListNode(9);
    l6->next->next->next = new ListNode(9);
    
    ListNode* result3 = solution.addTwoNumbers(l5, l6);
    
    // Verify: 8->9->9->9->0->0->0->1
    assert(result3->val == 8);
    assert(result3->next->val == 9);
    assert(result3->next->next->val == 9);
    assert(result3->next->next->next->val == 9);
    assert(result3->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->next->next->val == 1);
    assert(result3->next->next->next->next->next->next->next->next == nullptr);
    
    cout << "All add_two_numbers tests passed!" << endl;
}

void test_add_two_numbers_v2() {
    AddTwoNumbers::Solution solution;
    
    // Test case 1: Normal addition
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    ListNode* result1 = solution.addTwoNumbersV2(l1, l2);
    
    // Verify: 7->0->8 (342 + 465 = 807)
    assert(result1->val == 7);
    assert(result1->next->val == 0);
    assert(result1->next->next->val == 8);
    assert(result1->next->next->next == nullptr);
    
    // Test case 2: Different lengths
    ListNode* l3 = new ListNode(0);
    ListNode* l4 = new ListNode(0);
    ListNode* result2 = solution.addTwoNumbersV2(l3, l4);
    assert(result2->val == 0);
    assert(result2->next == nullptr);
    
    // Test case 3: Carry over
    ListNode* l5 = new ListNode(9);
    l5->next = new ListNode(9);
    l5->next->next = new ListNode(9);
    l5->next->next->next = new ListNode(9);
    l5->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next->next = new ListNode(9);
    
    ListNode* l6 = new ListNode(9);
    l6->next = new ListNode(9);
    l6->next->next = new ListNode(9);
    l6->next->next->next = new ListNode(9);
    
    ListNode* result3 = solution.addTwoNumbersV2(l5, l6);
    
    // Verify: 8->9->9->9->0->0->0->1
    assert(result3->val == 8);
    assert(result3->next->val == 9);
    assert(result3->next->next->val == 9);
    assert(result3->next->next->next->val == 9);
    assert(result3->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->next->val == 0);
    assert(result3->next->next->next->next->next->next->next->val == 1);
    assert(result3->next->next->next->next->next->next->next->next == nullptr);
    
    cout << "All add_two_numbers_v2 tests passed!" << endl;
}

int main() {
    test_add_two_numbers();
    test_add_two_numbers_v2();
    return 0;
}
