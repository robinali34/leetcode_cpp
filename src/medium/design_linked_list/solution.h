/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Design Linked List
 * Reference : https://leetcode.com/problems/design-linked-list/
 */

#ifndef DESIGN_LINKED_LIST_SOLUTION_H
#define DESIGN_LINKED_LIST_SOLUTION_H

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;

namespace DesignLinkedList {

class MyLinkedList {
private:
    ListNode *head;
    int size;

public:
    MyLinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
};

}

#endif // DESIGN_LINKED_LIST_SOLUTION_H
