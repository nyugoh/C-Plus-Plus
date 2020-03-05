/**
* Created by Joe Nyugoh Ngigi on 3/4/20.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

int arr[] = {10, 7, 30, 2, 9, 4, 3, 20};
int size = sizeof(arr) / sizeof(arr[0]);

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print() {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int partition(int low, int high) {
    int pivot = arr[high]; // Last element
    int i = low-1;
    for (int j = low; j <= high-1; j++) {
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++; // Place pivot in it's place
    swap(&arr[i], &arr[high]);
    return i;
}

void quickSort(int low, int high) {
    if(low < high) {
        int p = partition(low, high);
        quickSort(low, p-1);
        quickSort(p+1, high);
    }
}

int main() {

    print();
    quickSort( 0, size-1);
    print();
}