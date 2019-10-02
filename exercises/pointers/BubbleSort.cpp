#include <iostream>

using namespace std;

void bubbleSort(int*, int);
void swap(int*, int*, bool);

int main() {
    const int MAX = 5;
    int sizes[MAX] = {10, 5, 79, 45, 90};

    bubbleSort(sizes, MAX);

    for (int i = 0; i < MAX; ++i) {
        cout << *(sizes+i) << ' ';
    }
    return 0;
}

void bubbleSort(int *array, int MAX)
{
    for (int i = 0; i < MAX; ++i) {
        for (int j = i+1; j < MAX; ++j) {
            swap(array+i, array+j, false);
        }
    }
}

void swap(int *a, int *b, bool isAssending)
{
    int temp;
    if(isAssending)
        if (*a > *b){
            temp = *a;
            *b = *b;
            *b = temp;
        }
    else
        if (*a < *b){
            temp = *b;
            *b = *a;
            *a = temp;
        }
}