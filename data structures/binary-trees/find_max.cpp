/**
* Created by Joe Nyugoh Ngigi on 12/15/19 6:45 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <queue>
#include "BST.cpp"

using namespace std;

BST bst(10);

int findMaxRecursively(Node*);
int findMaxIteratively();

/*
 * Give an algorithm for finding maximum element in binary tree.
 * */
int main()
{
    bst.insertNode(15);
    bst.insertNode(50);
    bst.insertNode(60);
    bst.insertNode(5);
    bst.insertNode(45);
    bst.insertNode(99);
    bst.print();
    cout << "Max int :"<<  findMaxRecursively(bst.root) << endl;
    cout << "Max int :"<<  findMaxIteratively() << endl;
}

int findMaxRecursively(Node *node) {
    int tree_max = 0, left_max = 0, right_max = 0;
    if(!node) return 0;
    left_max = findMaxRecursively(node->leftChild);
    right_max = findMaxRecursively(node->rightChild);
    if(left_max > right_max){
        tree_max = left_max;
    }
    if (left_max < right_max) {
        tree_max = right_max;
    }
    if(node->data > tree_max) {
        tree_max = node->data;
    }
    return tree_max;
}

int findMaxIteratively() {
    int max = bst.root->data;
    queue<Node*> queue;
    queue.push(bst.root);
    Node *current = bst.root;
    while(current) {
        if (current->leftChild){
            queue.push(current->leftChild);
        }
        if (current->rightChild){
            queue.push(current->rightChild);
        }
        if(current->data > max)
            max = current->data;
        current = queue.front();
        queue.pop();
    }
    return max;
}