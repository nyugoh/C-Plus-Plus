/**
* Created by Joe Nyugoh Ngigi on 11/5/19 11:28 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

class Node {
public:
    Node(int x) : data(x), next(nullptr) {}

    int data;
    Node *next;
};

using namespace std;

struct LinkList{
    Node *head;

    LinkList(){
        head = nullptr;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
    }

    void print()
    {

    }
};

void traverse(Node *head) {
    cout << head->data << " ";
    if (head->next == nullptr) {
        cout << endl;
        return;
    }
    traverse(head->next);
}

void appendNode(Node *current, int data) {
    Node *newNode = new Node(data);
    newNode->next = current->next;
    current->next = newNode;
}

/*
 * Locate node position,
 * Store it's next value in a temp var
 * Switch pointer of previous to the next of the current node
 * */
void deleteNode(Node *head, Node *currentNode) {

    Node *tempNode = head;
    Node *prevNode;
    if (tempNode == currentNode) { // first has no previous, make it null
        free(currentNode);
        return;
    }
    while (tempNode->next != nullptr) {
        if (tempNode->next == currentNode) {
            prevNode = tempNode;
            break;
        }
        tempNode = tempNode->next;
    }
    if (prevNode != nullptr) {
        prevNode->next = currentNode->next;
        free(currentNode);
    }
}

bool searchItem(Node *head, int value) {
    Node *currentNode = head;
    bool isFound = false;
    while (currentNode->next != nullptr) {
        if (currentNode->data == value) {
            isFound = true;
            break;
        } else {
            currentNode = currentNode->next;
        }
    }
    return isFound;
}

bool searchItemRecursively(Node *head, int value) {
    if (head->data == value) {
        return true;
    } else if (head->next == nullptr) {
        return false;
    }
    return searchItemRecursively(head->next, value);
}

bool isEmpty(Node *head) {
    return head != nullptr;
}

int countItemIterative(Node *head) {
    int count = 1;
    Node *temp = head;
    while (temp->next != nullptr) {
        count += 1;
        temp = temp->next;
    }
    return count;
}

int countItemRecursively(Node *head) {
    if (head->next == nullptr)
        return 1;
    else
        return 1 + countItemRecursively(head->next);
}

int main() {
    Node *first = new Node(10);
    Node *second = new Node(15);
    Node *third = new Node(20);

    first->next = second;
    second->next = third;
    third->next = nullptr;

    cout << "isEmpty :: " << isEmpty(first) << endl;
    cout << "isEmpty :: " << isEmpty(third) << endl;

    traverse(first);
    appendNode(second, 99);
    appendNode(first, 17);
    appendNode(third, 77);
    traverse(first);

    cout << "Searching for 99: " << searchItem(first, 99) << endl;
    cout << "Searching recursively for 21: " << searchItemRecursively(first, 21) << endl;
    cout << "Searching for 25: " << searchItem(first, 25) << endl;
    cout << "Searching recursively for 99: " << searchItemRecursively(first, 99) << endl;

    traverse(first);
    cout << "Deleting :: " << first->data << endl;
    deleteNode(first, third->next);
    traverse(first);

    cout << "Total items(Iterative method) ::" << countItemIterative(first) << endl;
    cout << "Total items(Recursive method) ::" << countItemRecursively(first) << endl;
    return 0;
}
