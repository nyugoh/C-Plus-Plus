/**
* Created by Joe Nyugoh Ngigi on 11/9/19 11:17 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#ifndef C_PLUS_PLUS_LINKEDLIST_H
#define C_PLUS_PLUS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
public:
    LinkedList();
    Node *head;
    void appendNodeToEnd(int);
    void deleteNodeByValue(int);
    void print();
    bool isEmpty();

};


#endif //C_PLUS_PLUS_LINKEDLIST_H
