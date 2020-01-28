/**
* Created by Joe Nyugoh Ngigi on 1/14/20 8:12 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "Tree.cpp"

using namespace std;

int main()
{
    BinaryTree binaryTree(1);
    binaryTree.insertLevelOrder(2);
    binaryTree.insertLevelOrder(3);
    binaryTree.insertLevelOrder(4);
    binaryTree.insertLevelOrder(5);
    binaryTree.insertLevelOrder(6);
    binaryTree.insertLevelOrder(7);

    binaryTree.inOrderTraversal(binaryTree.root);
    cout << endl;
    binaryTree.preOrderTraversal(binaryTree.root);
    cout << endl;
    binaryTree.postOrderTraversal(binaryTree.root);
}