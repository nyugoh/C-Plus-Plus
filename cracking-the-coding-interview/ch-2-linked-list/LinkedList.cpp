/**
* Created by Joe Nyugoh Ngigi on 11/9/19 11:17 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
#include "Node.cpp"

using namespace std;

/*
 * Check if it's the head, - create a node and return
 * */
void LinkedList::appendNodeToEnd(int value) {
    Node *newNode = new Node(value); //(Node*) malloc(sizeof(Node));
    if (isEmpty()) {
        head = newNode;
        return;
    }
    Node *tempNode = head;
    while (tempNode->next != nullptr) {
        tempNode = tempNode->next;
    }
    tempNode->next = newNode;
}

void LinkedList::deleteNodeByValue(int value) {
    // If is empty return
    if (isEmpty())
        return;
    Node *currentNode = head;
    Node *prevNode = nullptr;
    while (currentNode->next != nullptr) {
        if (currentNode->data == value) {
            prevNode->next = currentNode->next;
            delete currentNode;
            break;
        }
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

}

void LinkedList::print() {
    Node *tempNode = head;
    cout << "Link list :- ";
    cout << "[ ";
    while (tempNode != nullptr) {
        cout << tempNode->data;
        if (tempNode->next != nullptr)
            cout << ", ";
        tempNode = tempNode->next;
    }
    cout << " ]" << endl;

}

bool LinkedList::isEmpty() {
    return head == NULL;
}

LinkedList::LinkedList() {
    head = NULL;
    cout << "Created linked list" << endl;
}
