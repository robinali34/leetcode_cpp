/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Design Circular Deque
 * Reference : https://leetcode.com/problems/design-circular-deque/
 */

#ifndef DESIGN_CIRCULAR_DEQUE_SOLUTION_H
#define DESIGN_CIRCULAR_DEQUE_SOLUTION_H

#include <vector>

using namespace std;

namespace DesignCircularDeque {

// Node structure for doubly linked list implementation
struct Node {
    int val;
    Node* next;
    Node* prev;
    Node(int val, Node* next = nullptr, Node* prev = nullptr)
        : val(val), next(next), prev(prev) {}
};

class MyCircularDeque {
private:
    vector<int> data;
    int front;
    int rear;
    int size;
    int capacity;
    
public:
    MyCircularDeque(int k);
    bool insertFront(int value);
    bool insertLast(int value);
    bool deleteFront();
    bool deleteLast();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
};

// Second implementation using doubly linked list
class MyCircularDequeLinkedList {
private:
    Node* head;
    Node* rear;
    int size;
    int capacity;
    
public:
    MyCircularDequeLinkedList(int k);
    ~MyCircularDequeLinkedList();
    bool insertFront(int value);
    bool insertLast(int value);
    bool deleteFront();
    bool deleteLast();
    int getFront();
    int getRear();
    bool isEmpty();
    bool isFull();
};

}

#endif // DESIGN_CIRCULAR_DEQUE_SOLUTION_H
