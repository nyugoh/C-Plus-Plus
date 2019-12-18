/**
* Created by Joe Nyugoh Ngigi on 11/23/19 12:39 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main(int argvc, char *argv[]) {
    LinkedList list(6);
    list.push(15);
    list.push(14);
    list.push(13);
    list.push(12);
    list.push(11);
    list.push(10);
    list.print();
    list.push(9);
    list.print();
    list.pop();
    list.pop();
    list.print();
    cout << "Top :" << list.peek() << endl;
    return 0;
}