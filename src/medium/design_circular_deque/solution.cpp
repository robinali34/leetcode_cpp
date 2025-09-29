/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Design Circular Deque
 * Reference : https://leetcode.com/problems/design-circular-deque/
 */

#include "solution.h"

using namespace std;

namespace DesignCircularDeque {

// First implementation using circular array
MyCircularDeque::MyCircularDeque(int k) {
    data.resize(k);
    front = 0;
    rear = 0;
    size = 0;
    capacity = k;
}

bool MyCircularDeque::insertFront(int value) {
    if (size == capacity) return false;
    front = (front - 1 + capacity) % capacity;
    data[front] = value;
    size++;
    return true;
}

bool MyCircularDeque::insertLast(int value) {
    if (size == capacity) return false;
    data[rear] = value;
    rear = (rear + 1) % capacity;
    size++;
    return true;
}

bool MyCircularDeque::deleteFront() {
    if (size == 0) return false;
    front = (front + 1) % capacity;
    size--;
    return true;
}

bool MyCircularDeque::deleteLast() {
    if (size == 0) return false;
    rear = (rear - 1 + capacity) % capacity;
    size--;
    return true;
}

int MyCircularDeque::getFront() {
    if (size == 0) return -1;
    return data[front];
}

int MyCircularDeque::getRear() {
    if (size == 0) return -1;
    int idx = (rear - 1 + capacity) % capacity;
    return data[idx];
}

bool MyCircularDeque::isEmpty() {
    return size == 0;
}

bool MyCircularDeque::isFull() {
    return size == capacity;
}

// Second implementation using doubly linked list
MyCircularDequeLinkedList::MyCircularDequeLinkedList(int k) {
    capacity = k;
    head = nullptr;
    rear = nullptr;
    size = 0;
}

MyCircularDequeLinkedList::~MyCircularDequeLinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

bool MyCircularDequeLinkedList::insertFront(int value) {
    if (isFull()) return false;
    auto* newNode = new Node(value);
    if (isEmpty()) {
        head = rear = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
    return true;
}

bool MyCircularDequeLinkedList::insertLast(int value) {
    if (isFull()) return false;
    if (head == nullptr) {
        head = new Node(value);
        rear = head;
    } else {
        Node* newNode = new Node(value, nullptr, rear);
        rear->next = newNode;
        rear = newNode;
    }
    size++;
    return true;
}

bool MyCircularDequeLinkedList::deleteFront() {
    if (isEmpty()) return false;
    Node* nodeToDel = head;
    if (size == 1) {
        head = rear = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete nodeToDel;
    size--;
    return true;
}

bool MyCircularDequeLinkedList::deleteLast() {
    if (isEmpty()) return false;
    Node* nodeToDel = rear;
    if (size == 1) {
        head = rear = nullptr;
    } else {
        rear = rear->prev;
        rear->next = nullptr;
    }
    delete nodeToDel;
    size--;
    return true;
}

int MyCircularDequeLinkedList::getFront() {
    return isEmpty() ? -1 : head->val;
}

int MyCircularDequeLinkedList::getRear() {
    return isEmpty() ? -1 : rear->val;
}

bool MyCircularDequeLinkedList::isEmpty() {
    return size == 0;
}

bool MyCircularDequeLinkedList::isFull() {
    return size == capacity;
}

}
