/**
* Created by Joe Nyugoh Ngigi on 11/13/19 9:22 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> scores(2);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i])
            scores[0] += 1;
        if (a[i] < b[i])
            scores[1] += 1;
    }

    return scores;
}


int diagonalDifference(vector<vector<int>> arr) {
    int leadingDiagSum = 0, secondDiagSum = 0, i, j, size = 0;
    size = arr.size();
    j= size-1;
    for(i=0; i<size;i++){
//        cout << "i=" << i << " j="<< j << endl;
        leadingDiagSum += arr[i][i];
        secondDiagSum += arr[i][j];
        j = j-1;
    }
//    cout << leadingDiagSum << endl;
//    cout << secondDiagSum << endl;
    return abs((leadingDiagSum-secondDiagSum));
}

void plusMinus(vector<int> arr) {
    int n = arr.size();
    double positiveFreq = 0, negativeFreq = 0, zerosFreq = 0;
    for(auto i: arr){
        if(i> 0)
            positiveFreq += 1;
        if(i == 0)
            zerosFreq += 1;
        if(i<0)
            negativeFreq += 1;

    }
    printf("%f\n", positiveFreq/((double)n));
    printf("%f\n", negativeFreq/((double)n));
    printf("%f\n", zerosFreq/((double)n));
}

void drawStairCase(int steps)
{
    int spacesCount = 0, hashCouts = 0, i,j;
    for(i=steps;i>0;i--){
        spacesCount = i-1;
        hashCouts = steps-spacesCount;
        for(j=0; j< spacesCount; j++)
            cout << " ";
        for(j=0; j< hashCouts; j++)
            cout << "#";
        cout << endl;
    }
}

void minMaxSum(vector<int> arr)
{
    int size = sizeof(arr)/ sizeof arr[0];
    int i, j;
    unsigned long minSum = 0, maxSum = 0;
    sort(arr.begin(), arr.begin()+ size);
    j = size -1;
    for(i = 0; i< size; i++){
        if(i < size-1)
            minSum += arr[i];
        if(j > 1)
            maxSum += arr[j];
        j -= 1;
    }
    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<vector<int>> arr = {
            {11, 2, 4},
            {4, 5, 6},
            {10, 8, -12},
            };
    cout << "Abs diff :" << diagonalDifference(arr) << endl;
    vector<int> a = {19, 45, 90, 0, -1};
    vector<int> b = {49, 46, 98};
    plusMinus(a);
    drawStairCase(6);
    vector<int> nums = { 7, 69, 2, 221, 8974};
    cout << sizeof 96u << endl;
    minMaxSum(nums);
//    for(int i=0; i< 2; i++)
//        cout << compareTriplets(a, b)[i] << endl;
}