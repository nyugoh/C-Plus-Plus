/**
* Created by Joe Nyugoh Ngigi on 11/16/19 12:20 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <vector>

using namespace std;

int makeAnagram(string s1, string s2)
{
    int times = 0;
    int chars1[26] = {0};
    int chars2[26] = {0};
    for(char c: s1) chars1[c-'a']++;
    for(char c: s2) chars2[c-'a']++;
    for(int i=0; i< 26; i++) times += abs((chars1[i]-chars2[i]));
    return times;
}

vector<int> rotateArray(vector<int> arr, int d)
{
    vector<int> tempArr(arr.begin(), arr.begin()+d);
    auto i = arr.begin();
    for(auto it=arr.begin()+d; it !=arr.end(); it++){
        *i = *it;
        i += 1;
    }
    i = arr.end()-d;
    for(auto it=tempArr.begin();it != tempArr.end(); it++){
        *i = *it;
        i += 1;
    }
    return arr;
}

int main(int argvc, char *argv[])
{
    string s1 = "jane";
    string s2 = "john";
//    cout << makeAnagram(s1, s2);

    vector<int> arr{9,8,7,6,5,4,3,2,1,0};
    for(auto i: arr)
        cout << i << " ";
    cout << endl;
    arr = rotateArray(arr, 3);
    for(auto i: arr)
        cout << i << " ";
    return 0;
}