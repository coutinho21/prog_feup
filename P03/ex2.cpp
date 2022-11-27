#include <iostream>
using namespace std;

struct fraction {
   int num; // Numerator
   int den; // Denominator
};

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b,a%b);
}

fraction sum(const fraction fa[], int n){
    fraction s = {0,1};
    int div;
    for(int i = 0; i < n; i++){
        s.num = s.num*fa[i].den + fa[i].num*s.den;
        s.den = s.den*fa[i].den;
        div = gcd(s.num,s.den);
        s.num /= div;
        s.den /= div;
    }
    if (s.den < 0){
        s.den = -s.den;
        s.num = -s.num;
    }
    return s;        
}