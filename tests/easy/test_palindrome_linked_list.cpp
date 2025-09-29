#include <cassert>
#include <iostream>
#include "../../src/easy/palindrome_linked_list/solution.h"
#include "../../src/easy/palindrome_linked_list/solution.cpp"

using namespace std;

void test_palindrome_linked_list() {
    PalindromeLinkedList::Solution solution;
    
    // Test case 1: Palindrome list
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(1);
    
    assert(solution.isPalindrome(head1) == true);
    
    // Test case 2: Not palindrome list
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    
    assert(solution.isPalindrome(head2) == false);
    
    // Test case 3: Single element (palindrome)
    ListNode* head3 = new ListNode(1);
    assert(solution.isPalindrome(head3) == true);
    
    // Test case 4: Empty list (palindrome)
    assert(solution.isPalindrome(nullptr) == true);
    
    // Test case 5: Two elements palindrome
    ListNode* head4 = new ListNode(1);
    head4->next = new ListNode(1);
    assert(solution.isPalindrome(head4) == true);
    
    // Test case 6: Two elements not palindrome
    ListNode* head5 = new ListNode(1);
    head5->next = new ListNode(2);
    assert(solution.isPalindrome(head5) == false);
    
    // Test case 7: Odd length palindrome
    ListNode* head6 = new ListNode(1);
    head6->next = new ListNode(2);
    head6->next->next = new ListNode(3);
    head6->next->next->next = new ListNode(2);
    head6->next->next->next->next = new ListNode(1);
    assert(solution.isPalindrome(head6) == true);
    
    cout << "All palindrome_linked_list tests passed!" << endl;
}

int main() {
    test_palindrome_linked_list();
    return 0;
}
