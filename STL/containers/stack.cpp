/**
* Created by Joe Nyugoh Ngigi on 11/14/19 10:02 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> marks;

    marks.push(20);
    marks.push(21);
    marks.push(22);
    marks.push(23);

    for(int i=0; i<=marks.size();i++){
        cout << marks.top() << " ";
        marks.pop();
    }

    return 0;
}