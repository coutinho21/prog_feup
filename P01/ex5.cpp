#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double aprox = 0;
    int k, d;
    cin >> k;
    cin >> d;

    for (int i = 0; i <= k ; i++) aprox += (pow(-1, i) /(2*i + 1));
    
    aprox *= 4;
    cout << setprecision(d);
    cout << fixed;
    cout << aprox << endl;
}