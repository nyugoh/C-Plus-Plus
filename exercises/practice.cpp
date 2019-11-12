/**
* Created by Joe Nyugoh Ngigi on 11/6/19 11:32 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(nullptr));
    for(int i=0; i< 50; i++){
        cout << rand()%50 << " ";
    }
}