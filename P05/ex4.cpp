#include <iostream>
using namespace std;

complex sum(complex a, complex b){
    return {a.real + b.real, a.img + b.img};
}
complex mul(complex a, complex b){
    return {(a.real*b.real) - (a.img*b.img), (a.real*b.img) + (b.real*a.img)};
}
void mandel(complex c, int n, complex z[]){
    z[0] = {0,0};
    for(int i = 1; i < n; i++){
        z[i] = sum(mul(z[i-1],z[i-1]),c);
    }
}