/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Design Linked List
 * Reference : https://leetcode.com/problems/design-linked-list/
 */

#include "solution.h"

using namespace std;

namespace DesignLinkedList {

MyLinkedList::MyLinkedList() {
    head = nullptr;
    size = 0;
}

int MyLinkedList::get(int index) {
    if (index < 0 || index >= size) {
        return -1;
    }
    
    ListNode *current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    
    return current->val;
}

void MyLinkedList::addAtHead(int val) {
    ListNode *newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
    size++;
}

void MyLinkedList::addAtTail(int val) {
    ListNode *newNode = new ListNode(val);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        ListNode *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    size++;
}

void MyLinkedList::addAtIndex(int index, int val) {
    if (index < 0 || index > size) {
        return;
    }
    
    if (index == 0) {
        addAtHead(val);
        return;
    }
    
    ListNode *newNode = new ListNode(val);
    ListNode *current = head;
    
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    
    newNode->next = current->next;
    current->next = newNode;
    size++;
}

void MyLinkedList::deleteAtIndex(int index) {
    if (index < 0 || index >= size) {
        return;
    }
    
    if (index == 0) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        size--;
        return;
    }
    
    ListNode *current = head;
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    
    ListNode *temp = current->next;
    current->next = temp->next;
    delete temp;
    size--;
}

}
