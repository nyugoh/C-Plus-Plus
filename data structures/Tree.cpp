/**
* Created by Joe Nyugoh Ngigi on 12/7/19 8:16 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include "include/Tree.h"
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

Node::Node(int d) :data(d) {
    leftChild = NULL;
    rightChild = NULL;
}

BinaryTree::BinaryTree(int root) {
    Node *rt = new Node(root);
    this->root = rt;
}

/*
 * traverse by levels and insert on the level with open slot
 * */
void BinaryTree::insertLevelOrder(int data) {
    Node *newNode = new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *node = q.front();
        q.pop();
        if(node->leftChild == NULL){
            node->leftChild = newNode;
            return;
        } else if(node->rightChild == NULL) {
            node->rightChild = newNode;
            return;
        } else {
            q.push(node->leftChild);
            q.push(node->rightChild);
        }
    }
}

/*
 * Left -> Current -> Right
 * */
void BinaryTree::inOrderTraversal(Node *node) {
    if(node == NULL) return;
    inOrderTraversal(node->leftChild);
    cout << node->data << " ";
    inOrderTraversal(node->rightChild);
}

void BinaryTree::inOrderTraversalIterative() {

}


/*
 * Current -> Left -> Right
 * */
void BinaryTree::preOrderTraversal(Node *node) {
    if(node == NULL) return;
    cout << node->data << " ";
    preOrderTraversal(node->leftChild);
    preOrderTraversal(node->rightChild);
}

void BinaryTree::preOrderTraversalIterative() {

}


/*
 * Left -> Right -> Current
 * */
void BinaryTree::postOrderTraversal(Node *node) {
    if(node == NULL) return;
    postOrderTraversal(node->leftChild);
    postOrderTraversal(node->rightChild);
    cout << node->data << " ";
}

/* Use stack */
void BinaryTree::postOrderTraversalIterative() {
    stack<Node*> stack;
    Node* tempNode = root;
    stack.push(tempNode);
    while(!stack.empty()) {
        Node* top = stack.top();
        while(top->leftChild) {
            stack.push(top->leftChild);
            top = stack.top();
        }
        cout << top->data << " ";
        while(top->rightChild) {

        }
    }
}