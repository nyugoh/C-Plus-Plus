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
};

void printInOrder(Node *node) {
    if(node){
        printInOrder(node->left);
        cout << node->data << " ";
        printInOrder(node->right);
    }
}

Node* insertNode(Node *root, int data) {
    if(!root) {
        Node *newNode = new Node(data);
        return newNode;
    }
    if(data < root->data)
        root->left = insertNode(root->left, data);
    if(data > root->data)
        root->right = insertNode(root->right, data);

    return root;
}

Node* findIterative(Node *root, int data) {
    Node *node = root;
    while(node) {
        if(data == node->data) {
            cout << "Found " << node->data << endl;
            return node;
        } else if(data > node->data) {
            node = node->right;
        } else if(data < node->data) {
            node = node->left;
        }
    }
    return nullptr;
}

Node* findRecursively(Node *root, int data) {
    if(!root)
        return nullptr;

    if(root->data < data)
        return findRecursively(root->right, data);

    if(root->data > data)
        return findRecursively(root->left, data);

    return root;
}

int findMin(Node *root) {
    int data = INT8_MIN;
    Node *node = root;
    while(node) {
        data = node->data;
        node = node->left;
    }
    return data;
}

int findMinRecursively(Node *node) {
    if(!node) {
        return INT8_MIN;
    }
    if(!node->left)
        return node->data;
    return findMinRecursively(node->left);
}

int findMax(Node *root) {
    int data = INT8_MAX;
    Node *node = root;
    while(node) {
        data = node->data;
        node = node->right;
    }
    return data;
}

int findMaxRecursively(Node *node) {
    if(!node) {
        return INT8_MAX;
    }
    if(node->right == nullptr) {
        return node->data;
    }
    return findMaxRecursively(node->right);
}



bool isBST(Node *root) {
    if(!root)
        return true;

    // False if root->data < FindMax(root->left)
    if(root->left != nullptr && findMax(root->left) > root->data)
        return false;
    // False if root->data < FindMin(root->right)
    if(root->right != nullptr && findMin(root->right) < root->data)
        return false;
    return !(!isBST(root->left) || !isBST(root->right));
}

int isBST(Node *root, int *prev) {
    if(!root) return 1;

    //Check left first
    if(!isBST(root->left, prev))
        return 0;
    // Check root node
    if(root->data < *prev) return 0;

    // Update prev
    *prev = root->data;
    // Check right
    return isBST(root->right, prev);
}

int main()
{
    BST bst{};
    bst.root = insertNode(nullptr, 5);
    insertNode(bst.root, 6);
    insertNode(bst.root, 7);
    insertNode(bst.root, 8);
    insertNode(bst.root, 9);
    insertNode(bst.root, 10);
    printInOrder(bst.root);

    cout << endl;
    findIterative(bst.root, 7);

    Node *result = findRecursively(bst.root, 10);
    if(result) {
        cout << "Found " << result->data << endl;
    } else {
        cout << "Not found..!" << endl;
    }

    cout << "Min Element I: " << findMin(bst.root) << endl;
    cout << "Min Element R: " << findMinRecursively(bst.root) << endl;
    cout << "Max Element I: " << findMax(bst.root) << endl;
    cout << "Max Element R: " << findMaxRecursively(bst.root) << endl;

    if(isBST(bst.root))
        cout << "Is BST" << endl;
    else
        cout << "Is not BST" << endl;
}