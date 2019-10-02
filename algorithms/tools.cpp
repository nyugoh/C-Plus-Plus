/**
* Created by Joe Nyugoh Ngigi on 10/2/19 3:56 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <ctime>

using namespace std;

int* generateRandomInts()
{
    const int SIZE = 10;
    static int nums[SIZE];
    srand(  (unsigned)time(NULL));

    for (int i = 0; i < SIZE; ++i)
        nums[i] = (rand()% 100) + 1;

    return nums;
}

void swap(int* first, int* second)
{
    cout << "Swapping " << *first << " and " << *second << endl;
    int temp = *first;
    *first = *first +  *second;
    *first -= temp;
    *second = temp;
}