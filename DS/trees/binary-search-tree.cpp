/**
* Created by Joe Nyugoh Ngigi on 3/3/20 12:24 AM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

class Node {
public:
    Node(int data):data(data) {
        left = nullptr;
        right = nullptr;
    }
    int data;
    Node *left;
    Node *right;
};

class BST {
public:
    Node *root;

    void insertNode(int);
};

void BST::insertNode(int data) {
    Node *newNode = new Node(data);
    if(!root) {
        root = newNode;
        return;
    }
    Node *node = root;
    while(node) {
        if(node->data  < data) {

            // Move left
            node = node->left;
        }
        if(node->data > data) {
            // Move right

        }
    }
}

int main()
{

}