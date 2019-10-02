//
// Created by joe on 3/25/18.
//
#include <iostream>
using namespace std;

template <class T>
int find(T* array, T value, int size){
    for(int i=0;i< size;i++)
        if(*(array+i) == value)
            return i;
    return -1;
}


int main()
{
    char chrArr[] = {1, 3, 5, 9, 11, 13}; //array
    char ch = 5; //value to find
    int intArr[] = {1, 3, 5, 9, 11, 13};
    int in = 6;
    long lonArr[] = {1L, 3L, 5L, 9L, 11L, 13L};
    long lo = 11L;
    double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
    double db = 4.0;
    
    cout << "\n 5 in chrArray: index=" << find(chrArr, ch, 6);
    cout << "\n 6 in intArray: index=" << find(intArr, in, 6);
    cout << "\n11 in lonArray: index=" << find(lonArr, lo, 6);
    cout << "\n 4 in dubArray: index=" << find(dubArr, db, 6);
    cout << endl;
    return 0;
}

