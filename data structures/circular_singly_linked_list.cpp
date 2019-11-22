/**
* Created by Joe Nyugoh Ngigi on 11/22/19 7:40 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * Base node structure*/
class Node {
public:
    int data;
    Node *next;

    Node(int d) : data(d) {
        next = NULL;
    }
};

/*
 * Circular Linked List ~ Elements are linked using next
 * - Tail node points to head, no node pointer is null
 * Operations
 *      - Insertion
 *          - at head
 *          - After position P
 *          - at the end
 *      - Count
 *      - Traversal
 *      - Deletion
 *          - at head
 *          - After position P
 *          - at the end
*       - Delete the whole structure
 * */

Node *head = NULL;

int countNodes() {
    int count = 0;
    Node *tempNode = head;
    if(!head) return 0;
    do {
        count++;
        tempNode = tempNode->next;
    } while (tempNode != head);
    return count;
}

void traversalIterative() {
    Node *tempNode = head;
    if (tempNode == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    do {
        cout << tempNode->data;
        if (tempNode->next != head)
            cout << " --> ";
        tempNode = tempNode->next;
    } while (tempNode != head);
    cout << endl;
}

void traversalRecursive(Node *node) {
    cout << node->data;
    if (node->next != head)
        cout << " --> ";
    if (node->next == head){
        cout << endl;
        return;
    }
    traversalRecursive(node->next);
}

/*
 * Delete all nodes */
void deleteLinkedList() {
    Node *it, *prev;
    it = head;
    do {
        prev = it;
        it = it->next;
        delete prev;
    } while (it != head);
    head = NULL;
}

void insertNode(int data, int position) {
    Node *newNode = new Node(data);
    Node *tempNode = head;
    int i = 1;
    // Is the first node
    if (position == 1 && countNodes() == 0) {
        head = newNode;
        newNode->next = head;
        return;
    }

    do {
        i++;
        tempNode = tempNode->next;
    } while (tempNode != head && i < position);

    if (tempNode->next == head) {
        // Inserting at the end
        tempNode->next = newNode;
        newNode->next = head;
    } else {
        // point new node to next node
        newNode->next = tempNode->next;
        // point current node to new node
        tempNode->next = newNode;
    }
}

void deleteNode(int position) {
    Node *tempNode = head, *prevNode = head;
    int i = 1;
    int length = countNodes();
    if (length == 0) {
        cout << "List is empty" << endl;
        return;
    }

    if (position > length) {
        cout << "Position not found in list." << endl;
        return;
    }
    do {
        prevNode = tempNode;
        tempNode = tempNode->next;
        i++;
    } while (tempNode != head && i < position);
    prevNode->next = tempNode->next;
    if(prevNode == tempNode){
        // only one node
        head = NULL;
    }
    if(tempNode->next == head){
        // at the end
        prevNode->next = head;
    }
    delete tempNode;
}

int main() {
    insertNode(120, 1);
    insertNode(30, 2);
    insertNode(99, 3);
    insertNode(11, 4);
    insertNode(635, 5);
    traversalRecursive(head);
    insertNode(55, 3);
    cout << endl;
    traversalIterative();
    insertNode(77, 9); // any position past the end
    cout << endl;
    traversalIterative();

    deleteNode(9);
    cout << endl;
    traversalIterative();

    deleteLinkedList();
    cout << "Length of list ::" << countNodes() << endl;

    traversalIterative();
}