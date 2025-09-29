/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_design_circular_deque.cpp
 * @desc : Test file for Design Circular Deque
 */

#include <iostream>
#include <cassert>
#include "../../src/medium/design_circular_deque/solution.h"
#include "../../src/medium/design_circular_deque/solution.cpp"

void testCircularArrayImplementation() {
    std::cout << "Testing Circular Array Implementation..." << std::endl;
    
    DesignCircularDeque::MyCircularDeque deque(3);
    
    // Test initial state
    assert(deque.isEmpty() == true);
    assert(deque.isFull() == false);
    assert(deque.getFront() == -1);
    assert(deque.getRear() == -1);
    std::cout << "Test 1 PASSED: Initial state" << std::endl;
    
    // Test insertLast
    assert(deque.insertLast(1) == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 1);
    assert(deque.isEmpty() == false);
    std::cout << "Test 2 PASSED: insertLast(1)" << std::endl;
    
    // Test insertFront
    assert(deque.insertFront(2) == true);
    assert(deque.getFront() == 2);
    assert(deque.getRear() == 1);
    std::cout << "Test 3 PASSED: insertFront(2)" << std::endl;
    
    // Test insertLast again
    assert(deque.insertLast(3) == true);
    assert(deque.getFront() == 2);
    assert(deque.getRear() == 3);
    assert(deque.isFull() == true);
    std::cout << "Test 4 PASSED: insertLast(3) - now full" << std::endl;
    
    // Test insert when full
    assert(deque.insertFront(4) == false);
    assert(deque.insertLast(4) == false);
    std::cout << "Test 5 PASSED: Cannot insert when full" << std::endl;
    
    // Test deleteFront
    assert(deque.deleteFront() == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 3);
    assert(deque.isFull() == false);
    std::cout << "Test 6 PASSED: deleteFront()" << std::endl;
    
    // Test deleteLast
    assert(deque.deleteLast() == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 1);
    std::cout << "Test 7 PASSED: deleteLast()" << std::endl;
    
    // Test deleteLast again
    assert(deque.deleteLast() == true);
    assert(deque.isEmpty() == true);
    assert(deque.getFront() == -1);
    assert(deque.getRear() == -1);
    std::cout << "Test 8 PASSED: deleteLast() - now empty" << std::endl;
    
    // Test delete when empty
    assert(deque.deleteFront() == false);
    assert(deque.deleteLast() == false);
    std::cout << "Test 9 PASSED: Cannot delete when empty" << std::endl;
    
    // Test complex sequence
    assert(deque.insertFront(5) == true);
    assert(deque.insertLast(6) == true);
    assert(deque.insertFront(7) == true);
    assert(deque.getFront() == 7);
    assert(deque.getRear() == 6);
    assert(deque.isFull() == true);
    std::cout << "Test 10 PASSED: Complex sequence" << std::endl;
}

void testLinkedListImplementation() {
    std::cout << "\nTesting Linked List Implementation..." << std::endl;
    
    DesignCircularDeque::MyCircularDequeLinkedList deque(3);
    
    // Test initial state
    assert(deque.isEmpty() == true);
    assert(deque.isFull() == false);
    assert(deque.getFront() == -1);
    assert(deque.getRear() == -1);
    std::cout << "Test 1 PASSED: Initial state" << std::endl;
    
    // Test insertLast
    assert(deque.insertLast(1) == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 1);
    assert(deque.isEmpty() == false);
    std::cout << "Test 2 PASSED: insertLast(1)" << std::endl;
    
    // Test insertFront
    assert(deque.insertFront(2) == true);
    assert(deque.getFront() == 2);
    assert(deque.getRear() == 1);
    std::cout << "Test 3 PASSED: insertFront(2)" << std::endl;
    
    // Test insertLast again
    assert(deque.insertLast(3) == true);
    assert(deque.getFront() == 2);
    assert(deque.getRear() == 3);
    assert(deque.isFull() == true);
    std::cout << "Test 4 PASSED: insertLast(3) - now full" << std::endl;
    
    // Test insert when full
    assert(deque.insertFront(4) == false);
    assert(deque.insertLast(4) == false);
    std::cout << "Test 5 PASSED: Cannot insert when full" << std::endl;
    
    // Test deleteFront
    assert(deque.deleteFront() == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 3);
    assert(deque.isFull() == false);
    std::cout << "Test 6 PASSED: deleteFront()" << std::endl;
    
    // Test deleteLast
    assert(deque.deleteLast() == true);
    assert(deque.getFront() == 1);
    assert(deque.getRear() == 1);
    std::cout << "Test 7 PASSED: deleteLast()" << std::endl;
    
    // Test deleteLast again
    assert(deque.deleteLast() == true);
    assert(deque.isEmpty() == true);
    assert(deque.getFront() == -1);
    assert(deque.getRear() == -1);
    std::cout << "Test 8 PASSED: deleteLast() - now empty" << std::endl;
    
    // Test delete when empty
    assert(deque.deleteFront() == false);
    assert(deque.deleteLast() == false);
    std::cout << "Test 9 PASSED: Cannot delete when empty" << std::endl;
    
    // Test complex sequence
    assert(deque.insertFront(5) == true);
    assert(deque.insertLast(6) == true);
    assert(deque.insertFront(7) == true);
    assert(deque.getFront() == 7);
    assert(deque.getRear() == 6);
    assert(deque.isFull() == true);
    std::cout << "Test 10 PASSED: Complex sequence" << std::endl;
}

void testEdgeCases() {
    std::cout << "\nTesting Edge Cases..." << std::endl;
    
    // Test with capacity 1
    DesignCircularDeque::MyCircularDeque deque1(1);
    assert(deque1.insertLast(1) == true);
    assert(deque1.isFull() == true);
    assert(deque1.getFront() == 1);
    assert(deque1.getRear() == 1);
    assert(deque1.insertFront(2) == false);
    assert(deque1.deleteLast() == true);
    assert(deque1.isEmpty() == true);
    std::cout << "Test 1 PASSED: Capacity 1" << std::endl;
    
    // Test with capacity 1 - LinkedList version
    DesignCircularDeque::MyCircularDequeLinkedList deque2(1);
    assert(deque2.insertLast(1) == true);
    assert(deque2.isFull() == true);
    assert(deque2.getFront() == 1);
    assert(deque2.getRear() == 1);
    assert(deque2.insertFront(2) == false);
    assert(deque2.deleteLast() == true);
    assert(deque2.isEmpty() == true);
    std::cout << "Test 2 PASSED: Capacity 1 (LinkedList)" << std::endl;
    
    // Test alternating insert/delete
    DesignCircularDeque::MyCircularDeque deque3(2);
    assert(deque3.insertFront(1) == true);
    assert(deque3.insertLast(2) == true);
    assert(deque3.deleteFront() == true);
    assert(deque3.insertFront(3) == true);
    assert(deque3.getFront() == 3);
    assert(deque3.getRear() == 2);
    std::cout << "Test 3 PASSED: Alternating operations" << std::endl;
}

int main() {
    try {
        testCircularArrayImplementation();
        testLinkedListImplementation();
        testEdgeCases();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}