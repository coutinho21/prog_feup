#include <iostream>
using namespace std;

bool is_mersenne_number(unsigned long n){
    if(n == 0)
        return false;
    
    
    if (n == (unsigned long) -1) 
        return true;
    
    n += 1;

    while (n%2==0) {
        n /= 2;
    }

    if (n == 1)
        return true;
    return false;
}