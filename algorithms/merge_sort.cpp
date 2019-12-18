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
void merge(vector<int> arry, int low, int mid, int high) {
    vector<int> sorted;
    auto l = arry.begin();
    auto h = l+mid+1;
    vector<int> first(arry.begin(), arry.at(l+mid));
    vector<int> second(arry.at(l+mid+1), arry.end());
    auto f_it = first.begin();
    auto s_it = second.begin();
    while(!first.empty() && !second.empty()) {
        if(*f_it < *s_it){
            sorted.push_back(*f_it);
            arry.erase(l);
            first.erase(f_it);
            l++;
            f_it++;
        } else if(arry.at(l) > arry.at(h)){
            sorted.push_back(arry.at(h));
            arry.erase(h);
            h++;
        }
    }
    while()
}


void mergeSort(vector<int> arry, int low, int high) {
    if(high > low){
        int mid = low + (high - low)/2;
        mergeSort(arry, low, mid);
        mergeSort(arry, mid+1, high);
        merge(arry, low, mid, high);
    }
}



int main(int argvc, char *argv[])
{


    return 0;
}
