/**
* Created by Joe Nyugoh Ngigi on 10/2/19 4:02 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include "tools.cpp"
#include "bubble.cpp"

using namespace std;

void showList(int*);

int main()
{
    int* pInts = generateRandomInts();

    showList(pInts);
    bubble_sort(pInts);
    showList(pInts);
    return 0;
}

void showList(int* nums)
{
    cout << "{ ";
    for (int i = 0; i < 10; ++i) {
        cout << *(nums+i) ;
        if(i != 9)
            cout << ", " ;
    }
    cout << " }" << endl;
}