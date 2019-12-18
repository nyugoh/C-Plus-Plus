/**
* Created by Joe Nyugoh Ngigi on 12/15/19 6:46 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include "BST.h"
#include "Node.cpp"
#include <queue>

using namespace std;

BST::BST(int data) {
    root = new Node(data);
}

/*
 * Insert
 * - Create new node
 * - Check if right has a node, if not insert else
 * - Check left child, insert or call
 * */
void BST::insertNode(int data) {
    Node *newNode = new Node(data);
    queue<Node *> queue;
    Node *current = root;
    queue.push(current);
    while (current) {
        if (current->leftChild){
            queue.push(current->leftChild);
        } else {
            current->leftChild = newNode;
            return;
        }

        if (current->rightChild){
            queue.push(current->rightChild);
        }else{
            current->rightChild = newNode;
            return;
        }
        current = queue.front();
        queue.pop();
    }
}

void BST::InOrder(Node *node) {
    /* Left ->Current -> Right */
    if(node == NULL) return;
    InOrder(node->leftChild);
    cout << node->data << " ";
    InOrder(node->rightChild);
}

void BST::print() {
    cout << endl;
    if(root)
        InOrder(root);
    else
        cout << "Tree is empty" << endl;
    cout << endl;
}

