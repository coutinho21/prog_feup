#include "alist.cpp"

void append(alist* a, const alist* b){
    if(b->size == 0) return;
    int n = a->size + b->size;
    int* c = new int[n];

    for(int i = 0; i < a->size; i++){
        c[i] = a->elements[i];
    }
    int h = 0;
    for(int k = a->size; k < n;k++){
        c[k] = b->elements[h];
        h++; 
    }
    delete []a->elements;
    a->size = n;
    a->elements = c;
}