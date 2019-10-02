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
//    static int nums[SIZE]= {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//    static int nums[SIZE]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    srand(  (unsigned)time(NULL));

    for (int i = 0; i < SIZE; ++i)
        nums[i] = (rand()% 100) + 1;

    return nums;
}

void swap_ints(int* first, int* second)
{
    cout << "Swapping " << *first << " and " << *second << endl;
    int temp = *first;
    *first = *first +  *second;
    *first -= temp;
    *second = temp;
}