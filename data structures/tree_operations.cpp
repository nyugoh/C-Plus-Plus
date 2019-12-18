/**
* Created by Joe Nyugoh Ngigi on 12/10/19 8:57 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "Tree.cpp"

using namespace std;

int main(int argvc, char *argv[])
{
    BinaryTree binaryTree(10);
    binaryTree.root->leftChild = new Node(11);
    binaryTree.root->rightChild = new Node(9);
    Node* l2L = binaryTree.root->leftChild;
    Node* l2R = binaryTree.root->rightChild;
    Node* l2Ll3L = l2L->leftChild = new Node(7);
    l2R->leftChild = new Node(15);
    l2R->rightChild = new Node(8);

    binaryTree.inOrderTraversal(binaryTree.root);
    binaryTree.insertLevelOrder(12);
    cout << endl;
    binaryTree.inOrderTraversal(binaryTree.root);
    cout << endl;
    binaryTree.preOrderTraversal(binaryTree.root);
    cout << endl;
    binaryTree.postOrderTraversal(binaryTree.root);
    return 0;
}