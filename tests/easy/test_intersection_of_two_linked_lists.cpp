#include <cassert>
#include <iostream>
#include "../../src/easy/intersection_of_two_linked_lists/solution.h"
#include "../../src/easy/intersection_of_two_linked_lists/solution.cpp"

using namespace std;

void test_intersection_of_two_linked_lists() {
    IntersectionOfTwoLinkedLists::Solution solution;
    
    // Test case 1: No intersection
    ListNode* list1 = new ListNode(2);
    list1->next = new ListNode(6);
    list1->next->next = new ListNode(4);
    
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(5);
    
    assert(solution.getIntersectionNode(list1, list2) == nullptr);
    
    // Test case 2: With intersection
    ListNode* common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);
    
    ListNode* list3 = new ListNode(4);
    list3->next = new ListNode(1);
    list3->next->next = common;
    
    ListNode* list4 = new ListNode(5);
    list4->next = new ListNode(6);
    list4->next->next = new ListNode(1);
    list4->next->next->next = common;
    
    assert(solution.getIntersectionNode(list3, list4) == common);
    
    // Test case 3: Same list
    assert(solution.getIntersectionNode(list1, list1) == list1);
    
    // Test case 4: One empty list
    assert(solution.getIntersectionNode(list1, nullptr) == nullptr);
    assert(solution.getIntersectionNode(nullptr, list2) == nullptr);
    
    // Test case 5: Both empty lists
    assert(solution.getIntersectionNode(nullptr, nullptr) == nullptr);
    
    cout << "All intersection_of_two_linked_lists tests passed!" << endl;
}

int main() {
    test_intersection_of_two_linked_lists();
    return 0;
}
