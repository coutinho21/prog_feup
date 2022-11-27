#include <iostream>
using namespace std;

unsigned long fact(unsigned long n){
    if (n == 0 || n == 1){
        return 1;
    }
    unsigned long out = 1;
    for(unsigned long i = 1 ; i <= n ; i++){
        out *= i;
    }
    return out;
}

unsigned long bell(unsigned long n){
    if (n == 0 || n == 1)
        return 1;

    unsigned long out = 0;
    for(unsigned long i = 0; i < n; i++){
        out += (fact(n-1)/(fact(i)*fact(n-1-i))) * bell(i);
    }
    return out;
}