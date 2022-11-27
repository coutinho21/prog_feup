#include <iostream>
using namespace std;

int main(){
    int n, out = 0;
    cin >> n;

    while (n){
        out *= 10;
        out += n % 10;
        n /= 10;
    }
    cout << out;
}