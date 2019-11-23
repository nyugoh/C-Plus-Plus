/**
* Created by Joe Nyugoh Ngigi on 11/23/19 2:41 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include "Node.cpp"
#include "./include/LinkedList.h"

using namespace std;

LinkedList::LinkedList(int cap) {
    head = NULL;
    capacity = cap;
    top = -1;
}

/*
 * Insert item to front of the list
 * @param int data
 * */
void LinkedList::push(int data) {
    Node *newNode = new Node(data);
    if (isEmpty()) {
        head = newNode;
        top = 1;
        return;
    }
    if (isFull()) {
        cout << "Stack overflow, can't push :" << data << endl;
        return;
    }
    if (head) {
        newNode->next = head;
        head = newNode;
        top += 1;
    }
}

/*
 * Returns the top element and deletes it from list
 * @return int
 * */
int LinkedList::pop() {
    int data = 0;
    Node *tempNode;
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    data = head->data;
    top -= 1;
    // delete first node
    tempNode = head;
    head = head->next;
    delete tempNode;
    return data;
}

/*
 * Returns the top most element*/
int LinkedList::peek() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return 0;
    } else {
        return head->data;
    }
}

bool LinkedList::isFull() {
    return capacity == top;
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

void LinkedList::print() {
    cout << "[ ";
    printRecursively(head);
    cout << endl;
}

void LinkedList::printRecursively(Node *node) {
    if (!node) return;
    printRecursively(node->next);
    cout << node->data;
    if (node != head) {
        cout << ", ";
    }
}