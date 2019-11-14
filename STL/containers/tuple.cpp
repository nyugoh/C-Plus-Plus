/**
* Created by Joe Nyugoh Ngigi on 11/14/19 4:22 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <tuple>

using namespace std;

int main(int argvc, char *argv[])
{
    /*
     * tuple ~ set of 3 items
     * */
    tuple<int, string, string> details;
    details = {20, "Jane", "Doe"};
    int age;
    string firstName, secondName;

    // spread the items in variables
    tie(age, firstName, secondName) = details;
    cout << "Age: " << age << " Name: " << firstName << " " << secondName << endl;
    return 0;
}