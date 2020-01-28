/**
* Created by Joe Nyugoh Ngigi on 12/7/19 8:16 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#ifndef C_PLUS_PLUS_TREE_H
#define C_PLUS_PLUS_TREE_H

class Node {
public:
    Node(int d);
    int data;
    Node *leftChild;
    Node *rightChild;
};

class BinaryTree {
public:
    BinaryTree(int);
    Node * root;

    void insertLevelOrder(int);
    void inOrderTraversal(Node*);
    void inOrderTraversalIterative();
    void preOrderTraversal(Node*);
    void preOrderTraversalIterative();
    void postOrderTraversal(Node*);
    void postOrderTraversalIterative();
};


#endif //C_PLUS_PLUS_TREE_H
