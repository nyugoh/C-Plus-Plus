/**
* Created by Joe Nyugoh Ngigi on 3/2/20 8:16 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Node {
public:
    explicit Node(int data): data(data) {
        left = nullptr;
        right = nullptr;
    }
    int data;
    Node *left;
    Node *right;
};

class BinaryTree {
public:
    Node *root;

    void addNode(int);

    void levelTraversal();

    void reverseLevelTraversal();
};

void BinaryTree::addNode(int data) {
    Node *newNode = new Node(data);

    if(root == nullptr) {
        root = newNode;
        return;
    }
    // Traverse level-wise and insert node
    queue<Node*> queue{};
    queue.push(root);
    while(!queue.empty()) {
        Node *head = queue.front();
        if(head->left == nullptr){
            head->left = newNode;
            return;
        } else {
            queue.push(head->left);
        }
        if(head->right == nullptr){
            head->right = newNode;
            return;
        } else {
            queue.push(head->right);
        }
        queue.pop();
    }
}

void preOrderTraverseRecursively(Node *node) {
    if(node){
        cout << node->data << " ";
        preOrderTraverseRecursively(node->left);
        preOrderTraverseRecursively(node->right);
    }
}

void preOrderTraversalIteratively(Node *root){
    stack<Node*> stack{};
    while(true) {
        // Visit all left nodes
        while(root != nullptr) {
            // Visit node
            cout << root->data << " ";
            // Push node to stack
            stack.push(root);
            //Update new root
            root = root->left; // Move left
        }
        if(stack.empty())
            break;
        // Pick the top element
        root = stack.top();
        stack.pop();

        // Move right sub-tree
        root = root->right;
    }
}


void postOrderRecursively(Node *node) {
    if(node != nullptr) {
        postOrderRecursively(node->left);
        postOrderRecursively(node->right);
        cout << node->data << " ";
    }
}

void postOrderTraversalIteratively(Node *root) {
    stack<Node*> stack{};
    while(true) {
        while(root != nullptr) {
            // Push to stack
            stack.push(root);
            // Move left, update root
            root = root->left;
        }
        if(stack.empty())
            break;

        // Peek top and visit it
        root = stack.top();
        stack.pop();

        cout << root->data << " ";
        root = stack.top();

        while(root != nullptr) {
            // Move left, update root
            root = root->right;
            // Push to stack
            stack.push(root);
        }
    }
}

void BinaryTree::levelTraversal() {
    cout << endl << "Level traversal" << endl;
    queue<Node*> queue;
    // Push root
    queue.push(root);
    while(!queue.empty()) {
        // Dequeue, print and enqueue children of node
        Node *head = queue.front();
        queue.pop();
        cout << head->data << " ";

        if(head->left)
            queue.push(head->left);

        if(head->right)
            queue.push(head->right);
    }
    cout << endl;
}

void BinaryTree::reverseLevelTraversal() {
    cout << endl << "Level traversal in reverse" << endl;
    queue<Node*> queue;
    stack<Node*> stack;
    // Push root
    queue.push(root);
    while(!queue.empty()) {
        // Dequeue, push into stack and enqueue children of node
        Node *head = queue.front();
        queue.pop();
       stack.push(head);
        if(head->left)queue.push(head->left);
        if(head->right) queue.push(head->right);
    }
    while(!stack.empty()){
        cout << stack.top()->data << " ";
        stack.pop();
    }
    cout << endl;
}

int maxNode(Node *node) {
   if(!node->left && !node->right)
       return node->data;
   int maxLeft = maxNode(node->left);
   int maxRight = maxNode(node->right);
   int childMax = maxLeft> maxRight? maxLeft: maxRight;
   return childMax > node->data? childMax: node->data;
}

int numberOfNodes(Node *root) {
    int total = 0;
    if(!root) return total;
    queue<Node*> queue;
    queue.push(root);
    while(!queue.empty()) {
        Node *node = queue.front();
        queue.pop();
        total++;
        if(node->left)
            queue.push(node->left);
        if(node->right)
            queue.push(node->right);
    }
    return total;
}

int totalNodesRecursive(Node *node) {
    if(!node) {
        return 0;
    }
    return totalNodesRecursive(node->left) +1 + totalNodesRecursive(node->right);
}

int main()
{
    BinaryTree binaryTree{};
    binaryTree.addNode(1);
    binaryTree.addNode(2);
    binaryTree.addNode(3);
    binaryTree.addNode(4);
    binaryTree.addNode(5);
    binaryTree.addNode(6);
    binaryTree.addNode(7);

    preOrderTraverseRecursively(binaryTree.root);
    cout << endl;
    preOrderTraversalIteratively(binaryTree.root);

    cout << endl<< "Post-Order recursively" << endl;
    postOrderRecursively(binaryTree.root);

//    cout << endl<< "Post-Order iteratively" << endl;
//    postOrderTraversalIteratively(binaryTree.root);
    binaryTree.levelTraversal();
    binaryTree.reverseLevelTraversal();

    cout << "Max node :" << maxNode(binaryTree.root) << endl;
    cout << "Total nodes :" << numberOfNodes(binaryTree.root) << endl;
    cout << "Total nodes by recursion:" << totalNodesRecursive(binaryTree.root) << endl;
}