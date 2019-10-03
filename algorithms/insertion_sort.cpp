/**
* Created by Joe Nyugoh Ngigi on 10/3/19 6:47 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * Take the first element, assume it's sorted,
 * take the next element, compare with the already sorted one
 * if the number is less, swap the two,
 * pick the next element, check with the existing ones, swap till it's in the correct position
 * */
void insertion_sort(int* nums)
{
    int j, index, indexOfSwap, currentElement, noOfLoops = 0, indexOfLastInSorted = 0;
    for (index = 1; index < 10; ++index) {
        indexOfSwap = index;
        cout << "Current value " << *(nums+indexOfSwap) << endl;
        for (j = index-1; j >= 0; --j) { // Loop the sorted part and make swaps
            currentElement = *(nums+indexOfSwap);
            cout << "Looping backward :: j = " << j << endl;
            cout << "Checking value:: " << *(nums+ j) << endl;
            if(currentElement < *(nums+ j)){
                swap_ints((nums+j), (nums+ indexOfSwap));
                showList(nums);
                indexOfSwap --;
                noOfLoops ++;
            }
            cout << "-------------------------------" << endl;
        }
        indexOfLastInSorted ++;
    }
    cout << "Finished in " << noOfLoops << " loops" << endl;
}