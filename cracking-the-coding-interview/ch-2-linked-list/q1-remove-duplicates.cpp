/**
* Created by Joe Nyugoh Ngigi on 11/9/19 11:15 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
 *  Write code to remove duplicates from an unsorted linked list.
 *  FOLLOW UP
 *  How would you solve this problem if a temporary buffer is not allowed?
 * */


int main(int argvc, char *argv[])
{
    LinkedList linkedList;
    linkedList.print();
    linkedList.appendNodeToEnd(20);
    linkedList.deleteNodeByValue(20);
    linkedList.appendNodeToEnd(21);
    linkedList.appendNodeToEnd(22);
    linkedList.appendNodeToEnd(23);
    linkedList.print();
    return 0;
}