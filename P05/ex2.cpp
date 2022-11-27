#include <iostream>
using namespace std;

void remove_duplicates(int a[], int& size){
    int pos = 1;
    int prev = a[0];
    int newSize = 1;
    for (int i = 0; i < size; i++){
        if (a[i] != prev){
            a[pos] = a[i];
            pos++;
            prev = a[i];
            newSize++;
        }
    }
    size = newSize;
}