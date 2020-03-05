/**
* Created by Joe Nyugoh Ngigi on 10/5/19 9:49 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <vector>
#include <iostream>

using namespace std;

/*
 * Merge sort
 * - A divide and conquer algo
 * - Splits the array by 2 every time, till it's only one item left,
 * - Merge starts, sorts the elements and joins them up tp form a sorted array
 * */

/*
 * Merge the two arrays
 * - loop the two arrays, compare the first elements and add the least in the array
 * -
 * */
void mergeArrays(int array[], int tempArray[], int low, int mid, int high) {
    int right_start = mid+1;
    int tempPos = low, size = high-low + 1;
    while((low <=mid) && (right_start <= high)) {
        if(array[low] <= array[right_start]){
            tempArray[tempPos] = array[low];
            tempPos += 1;
            low += 1;
        } else {
            tempArray[tempPos] = array[right_start];
            tempPos += 1;
            right_start += 1;
        }
    }
    // Check if one still has elements
    while(low <= mid) {
        tempArray[tempPos] = array[low];
        tempPos += 1;
        low += 1;
    }

    while(right_start <= high) {
        tempArray[tempPos] = array[right_start];
        tempPos += 1;
        right_start += 1;
    }
    for (int i = 0; i <= size; ++i) {
        array[high] = tempArray[high];
        high -= 1;
    }
}

void mergeSort(int array[], int tempArray[], int low, int high) {
    if(low < high) {
        int mid = low + (high-low)/2; // (low+high)/2;
        mergeSort(array, tempArray, low, mid);
        mergeSort(array, tempArray, mid+1, high);
        mergeArrays(array, tempArray, low, mid, high);
    }
}

int main(int argvc, char *argv[])
{
    int array[] = {1, 5, 3, 10,7, 11, 12, 9, 2}, tempArray[9];
    for(auto it :array)
        cout << it << ", ";
    cout << endl;
    mergeSort(array, tempArray, 0, 8);
    for(auto it :array)
        cout << it << ", ";
    cout << endl;

    return 0;
}
