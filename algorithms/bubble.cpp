/**
* Created by Joe Nyugoh Ngigi on 10/2/19 3:35 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

void bubble_sort(int* nums)
{
    bool continueLooping = true;
    cout << "Sorting" << endl;
    while(continueLooping) {
        continueLooping = false;
        for (int i = 0; i < 10; ++i) {
            cout << "Round " << i +1 << endl;
            int* current = nums + i;
            int* next = (nums+ (i+1));
            if(*current > *next && (i+1) < 10){
                swap(current, next);
                continueLooping = true;
            }
        }
    }
    cout << "Finished sorting" << endl;
}