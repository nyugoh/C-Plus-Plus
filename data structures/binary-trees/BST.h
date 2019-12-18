/**
* Created by Joe Nyugoh Ngigi on 12/15/19 6:46 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#ifndef C_PLUS_PLUS_BST_H
#define C_PLUS_PLUS_BST_H

#include "Node.h"

class BST {
public:
    BST(int);
    Node *root;
    void insertNode(int);
    void print();
    void InOrder(Node *);
};


#endif //C_PLUS_PLUS_BST_H
