/**
* Created by Joe Nyugoh Ngigi on 10/2/19 3:35 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

int bubble_sort(int* nums)
{

    cout << "Sorting" << endl;

    for (int i = 0; i < 10; ++i) {
        int* current = nums + i;
        int* next = (nums+ (i+1));
        if(*current > *next)
            swap(current, next);
        cout << *next << " " << *current << endl;
    }

    return 0;
}