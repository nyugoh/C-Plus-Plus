/**
* Created by Joe Nyugoh Ngigi on 12/15/19 8:11 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <queue>
#include "BST.cpp"

using namespace std;

/*
 * Give an algorithm for searching an element in binary tree.
 * */

BST bst(100);

bool searchRecursively(Node*, int);

bool searchIteratively(int value);

bool search(int);

int main()
{
    bst.insertNode(101);
    bst.insertNode(102);
    bst.insertNode(103);
    bst.insertNode(104);
    bst.insertNode(105);

    if(search(130)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

bool search(int value) {
    return searchRecursively(bst.root, value) || searchIteratively(value);
}

bool searchIteratively(int value) {
    queue<Node*> queue;
    Node *current = bst.root;
    queue.push(current);
    while(current){
        if(current->data == value) return 1;
        if(current->leftChild) queue.push(current->leftChild);
        if(current->rightChild) queue.push(current->rightChild);
        current = queue.front();
        queue.pop();
    }
    return 0;
}

bool searchRecursively(Node *node, int value) {
    if(node) {
        if(node->data == value) return 1;
        if (searchRecursively(node->leftChild, value)) return 1;
        if (searchRecursively(node->rightChild, value)) return 1;
        return 0;
    } else return 0;
}