#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    for(int i = 2;i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPernicious(int n){
    int numberOf1 = 0;
    string out;
    out = bitset<8>(n).to_string();
    for(char i: out){
        if (i == '1'){
            numberOf1 += 1;
        }
    }
    if (isPrime(numberOf1)){
        return true;
    }    
    return false;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    for(int i = a;i <= b; i++){
        if (isPrime(i) && isPernicious(i)){
            cout << i << endl;
        }
    }
}