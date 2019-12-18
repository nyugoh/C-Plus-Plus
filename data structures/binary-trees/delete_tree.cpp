/**
* Created by Joe Nyugoh Ngigi on 12/15/19 9:25 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "BST.cpp"

using namespace std;

BST bst(1);

void deleteTree(Node *);

int main()
{
    bst.insertNode(2);
    bst.insertNode(3);

    bst.insertNode(4);
    bst.insertNode(5);
    bst.insertNode(6);
    bst.insertNode(7);

    bst.print();
    deleteTree(bst.root);
    bst.print();
    cout << bst.root << endl;
    cout << bst.root->data << endl;
}

/*
 * Use post-order traversal
 * left -> right -> current
 * */
void deleteTree(Node *node) {
    if(node) {
        deleteTree(node->leftChild);
        deleteTree(node->rightChild);
        delete node;
    }
}