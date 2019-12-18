/**
* Created by Joe Nyugoh Ngigi on 11/15/19 9:46 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <vector>

using namespace std;

int computeSum(vector<vector<int>>  array, int i, int j)
{
    int sum = 0;
    for(int row=i; row< i+3;row++){
        for(int col=j; col< j+3;col++) {
            if(row==i || row==i+2){
                cout << array[row][col] << " ";
                sum += array[row][col];
            }else{
                if(col ==j+1){
                    sum += array[row][col];
                    cout << array[row][col] << " ";
                } else {
                    cout << " " << " ";
                }
            }
        }
    }
    return sum;
}
int hourglassSum(vector<vector<int>> arr) {
    int max = 0, sum = 0;
    for(int i=0; i< 4;i++){
        for(int j=0; j< 4;j++){
            sum = computeSum(arr, i, j);
            if(sum > max){
                max = sum;
            }
        }
        cout << endl;
    }
    return max;
}

int main(int argvc, char *argv[])
{
    vector<vector<int>> matrix
    {
            {1,1,1,0,0,0},
            {0,1,0,0,0,0},
            {1,1,1,0,0,0},
            {0,0,2,4,4,0},
            {0,0,0,2,0,0},
            {0,0,1,2,4,0},
    };
    cout << "Max sum :" << hourglassSum(matrix) << endl;
    return 0;
}