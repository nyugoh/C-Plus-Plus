/**
* Created by Joe Nyugoh Ngigi on 11/23/19 2:41 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#ifndef C_PLUS_PLUS_LINKEDLIST_H
#define C_PLUS_PLUS_LINKEDLIST_H

#include "./Node.h"

class LinkedList {
public:
    Node *head;
    int capacity;
    int top = -1;

    LinkedList(int);

    void push(int);

    int pop();

    int peek();

    bool isFull();

    bool isEmpty();

    void print();

    void printRecursively(Node *node);
};


#endif //C_PLUS_PLUS_LINKEDLIST_H
