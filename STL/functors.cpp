/**
* Created by Joe Nyugoh Ngigi on 10/5/19 12:29 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

class succ_func
{
public:
    int operator()(int an_int)
    {
        return an_int + 1;
    }
};

int main()
{
    int i_n_i = 25;
    succ_func some_object;

    cout << some_object(i_n_i) << endl;

    cout << "Functors are objects that are used as functions. Inside the object, overload operator()" << endl;

    return 0;
}