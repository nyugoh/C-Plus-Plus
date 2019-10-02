/**
* Created by Joe Nyugoh Ngigi on 10/2/19 8:39 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

void selection_sort(int* nums)
{
    int sortedListLength = 0;
    int indexOfMin = 0;
    for (int i = sortedListLength; i < 10; ++i) {
        indexOfMin = findIndexOfMin(sortedListLength, nums, 10);
        swap_ints(nums+sortedListLength, nums+indexOfMin);
        sortedListLength ++ ;
        showList(nums);
    }

}