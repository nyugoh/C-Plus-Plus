/**
* Created by Joe Nyugoh Ngigi on 11/14/19 11:03 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> heap;
    heap.push(10);
    heap.push(900);
    heap.push(60);
    heap.push(70);
    cout << "Top: " << heap.top() << endl;
}