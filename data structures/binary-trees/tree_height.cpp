/**
* Created by Joe Nyugoh Ngigi on 12/15/19 10:14 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include "BST.cpp"

using namespace std;
BST bst(1); // level 1

int findHeight(Node*);

int main()
{
    // level 1 is root
    // level 2
    bst.insertNode(2);
    bst.insertNode(3);
    // level 3
    bst.insertNode(4);
    bst.insertNode(5);
    bst.insertNode(6);
    bst.insertNode(7);
    // level 4
    bst.insertNode(4);
    bst.insertNode(5);
    bst.insertNode(6);
    bst.insertNode(7);
    bst.insertNode(6);
    bst.insertNode(6);
    bst.insertNode(6);
    bst.insertNode(6);
    // level 5
    bst.insertNode(6);

    cout << "Height :: " << findHeight(bst.root) << endl;
}

int findHeight(Node *node) {
    int left_height = 0, right_height = 0;
    if(node == NULL)
        return 0;
    left_height = findHeight(node->leftChild);
    right_height = findHeight(node->rightChild);

    if(left_height > right_height)
        return left_height+1;
    else
        return right_height+1;

}