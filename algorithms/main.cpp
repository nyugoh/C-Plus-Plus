/**
* Created by Joe Nyugoh Ngigi on 10/2/19 4:02 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include "tools.cpp"
#include "bubble.cpp"
#include "selection_sort.cpp"

using namespace std;

int main()
{
    int* pInts = generateRandomInts();
    showList(pInts);
//    bubble_sort(pInts);
    selection_sort(pInts);
    showList(pInts);
    return 0;
}
