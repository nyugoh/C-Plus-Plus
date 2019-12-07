/**
* Created by Joe Nyugoh Ngigi on 11/23/19 11:31 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

/*
 *
 * Return Kth to Last:
 * Implement an algorithm to find the kth to last element of a singly linked list.
 * */

/*
 * -Find length - M,
 * -The element will be M-n+1int m = 0, k = 4;
    for (auto it = list.begin(); it != list.end(); it++) {
        m += 1;
    }
 * */

/*
 * Using two pointers
 * - p1 & p2, one moving k steps, when it gets to end, the other will be k steps away
 * */
Node* nthToLastIteratively(LinkedList list, int k) {
    Node *fastPrt = list.head;
    Node *slowPrt = list.head;

    /*
     * Move fstPrt k steps */
    for (int i = 1; i <=k; i++)
        fastPrt = fastPrt->next;

    /*
     * Move them equally */
    while (fastPrt) {
        fastPrt = fastPrt->next;
        slowPrt = slowPrt->next;
    }
    return slowPrt;
}

Node* getNthToLastRecursion(Node *node, int k, int &count){
    if(!node) return NULL;
    Node* index = getNthToLastRecursion(node->next, k, count);
    count += 1;
    if(count == k){
        return node;
    }
    return index;
}

int nthToLastRecursion(LinkedList list, int k){
    int count = 0;
    Node* value = getNthToLastRecursion(list.head, k, count);
    return value->data;
}

int main(int argvc, char *argv[]) {
    LinkedList list;
    int k = 3;
    list.appendNodeToEnd(10);
    list.appendNodeToEnd(11);
    list.appendNodeToEnd(12);
    list.appendNodeToEnd(13);
    list.appendNodeToEnd(14);
    list.appendNodeToEnd(15);
    list.appendNodeToEnd(16);
    list.appendNodeToEnd(17);
    list.appendNodeToEnd(18);
    list.appendNodeToEnd(19);

    cout << k << "th from last is " << nthToLastIteratively(list, k)->data << endl;
    cout << k << "th from last is " << nthToLastRecursion(list, 2);
    return 0;
}