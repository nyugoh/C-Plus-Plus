/**
* Created by Joe Nyugoh Ngigi on 11/23/19 11:51 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

/*
 * Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but
 * the first and last node, not necessarily the exact middle) of a singly linked list, given only access to that node.
 * EXAMPLE:
 *      Input:the node c from the linked list a->b->c->d->e->f
 *      Result: nothing is returned, but the new linked list looks like a->b->d->e->f
 * */

/* SOLUTION
 * You are only given the node to remove, no head
 * - Move the data in the next node to the current node,
 * - Delete the next node */
void removeMiddleNode(Node *node)
{
   Node *nextNode;
   /*
    * If is last node, can't delete it */
   if(!node->next){
       cout << "Can't perform operation at the end of list" << endl;
       return;
   }

   nextNode = node->next;
   node->data = nextNode->data;
   node->next = nextNode->next;
   delete nextNode;
}

int main(int argvc, char *argv[])
{
    LinkedList list;
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
    list.print();
    removeMiddleNode(list.head->next->next);
    list.print();
    return 0;
}
