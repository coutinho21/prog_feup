#include <iostream>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    double bin = pow(b,2) - (4*a*c);
    if (bin < 0){
        x1 = NAN; 
        x2 = NAN; 
        return 0;
    }
    else if (bin == 0){
        x1 = -b/double(2*a); 
        x2 = NAN; 
        return 1;
    }
    else {
        x1 = (-b -(sqrt(bin)))/double(2*a); 
        x2 = (-b +sqrt(bin))/double(2*a); 
        return 2;
    }
}