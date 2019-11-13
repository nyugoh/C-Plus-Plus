/**
* Created by Joe Nyugoh Ngigi on 11/13/19 7:22 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
using namespace std;

/*
 * Binary Search Tree
 *  - A tree( a node connected via edges), where each node has a max of two children and
 *  left descendants nodes <= n( node) < right descendants
 *  Operation
 *      - insert(data)
 *      - search(value)
 *      - Traversal
 *          - in-order
 *          - pre-order
 *          - post-order
 * */

class Node
{
public:
    Node(int d): data(d) {
        leftChild = NULL;
        rightChild = NULL;
    }
    int data;
    Node *leftChild;
    Node *rightChild;
};

Node *root = NULL;

bool isEmpty()
{
    return root == NULL;
}

void insert(int data)
{
    Node *newNode = new Node(data);
    Node *currentNode = root;
    Node *parentNode = NULL;
    // check if root is null, make root
    if(root == NULL){
        root = newNode;
        return;
    }

    while(1){
        parentNode = currentNode;
        // Compare with root node value
        if(data < currentNode->data){
            // goto on left child
            currentNode = currentNode->leftChild;
            // check is left child exist
            if(currentNode == NULL){
                // Insert it there
                parentNode->leftChild = newNode;
                return;
            }
        }else{
            // goto right child
            currentNode = currentNode->rightChild;
            // check is left child exist
            if(currentNode == NULL){
                parentNode->rightChild = newNode;
                return;
            }
        }
    }
}

Node* search(int value)
{
    Node *position = NULL;
    // compare with root,
    // if equal, return
    // otherwise move right or left,
    // Make node root and repeat step 1

    cout << "Visiting elements :- ";
    if(isEmpty()){
        cout << "BST is empty"<< endl;
        return NULL;
    }
    Node *tempNode = root;
     while(tempNode != NULL){
         cout << tempNode->data << " -> ";
         if(value == tempNode->data){
             position = tempNode;
             cout << "\n Found it !! " << endl;
             break;
         }
         if (value < tempNode->data){
             // goto left
             tempNode = tempNode->leftChild;
         } else {
             // goto right
             tempNode = tempNode->rightChild;
         }
     }
     if(tempNode == NULL){
         cout << "\nValue not found !" << endl;
         return NULL;
     } else {
      return position;
     }
}

void visit(Node *node)
{
    cout << node->data << " ";
}

void InOrderTraversal(Node *node)
{
    /*
     * LEFT -> ROOT -> RIGHT
     * Recursively visit left nodes
     * visit root node
     * Recursively visit right nodes
     * */
    if(node != NULL) {
        InOrderTraversal(node->leftChild);
        visit(node);
        InOrderTraversal(node->rightChild);
    }
}

void PreOrderTraversal(Node *node)
{
    /*
     * ROOT -> LEFT -> RIGHT
     * Visit root node
     * Recursively visit left nodes
     * Recursively visit right nodes
     * */
    if(node != NULL){
        visit(node);
        PreOrderTraversal(node->leftChild);
        PreOrderTraversal(node->rightChild);
    }
}


void PostOrderTraversal(Node *node)
{
    /*
     * LEFT -> RIGHT -> ROOT
     * Recursively visit left nodes
     * Recursively visit right nodes
     * Visit root node
     * */
    if(node != NULL){
        PostOrderTraversal(node->leftChild);
        PostOrderTraversal(node->rightChild);
        visit(node);
    }
}

int main(int argvc, char *argv[])
{
    int items[] = { 27, 14, 35, 10, 19, 31, 42,};
    for(auto i :items)
        insert(i);

    cout << "In-Order traversal" << endl;
    InOrderTraversal(root);
    cout << "\nPre-Order traversal" << endl;
    PreOrderTraversal(root);
    cout << "\nPost-Order traversal" << endl;
    PostOrderTraversal(root);
    cout << "\nSearching for 89: "<< endl;
    search(89);
    cout << "\nSearching for 42: "<< endl;
    search(42);

    return 0;
}
