#include <iostream>
using namespace std;

//! Auxiliary function to print n elements of an array.
void print_array(const int a[], int n){
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) {
    cout << ',' << a[i];
  }
  cout << "]\n";
}

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    for(int i = 0; i < na; i++){
        c[i] = a[i];
    }
    for(int i = 0; i < nb; i++){
        c[i+na] = b[i];
    }
    int temp;
    for(int i = 0; i < na+nb;i++){
        for(int j = 0; j < na+nb; j++){
            if (c[i]<c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}