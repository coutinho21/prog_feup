#include <iostream>
using namespace std;

bool anagrams(const char a[], const char b[], int& n){
    char let[26] = { 0 };
    int pos = 0;
    while(a[pos] != '\0'){
        if( a[pos] == ' '){
            pos++;
            continue;
        }
        else if( a[pos] >= 'a' && a[pos] <= 'z')
            let[a[pos] - 'a']++;
        else if( a[pos] >= 'A' && a[pos] <= 'Z')
            let[a[pos] - 'A']++;
        pos++;
    }
    pos = 0;
    while(b[pos] != '\0'){
        if( b[pos] == ' '){
            pos++;
            continue;
        }
        else if( b[pos] >= 'a' && b[pos] <= 'z')
            let[b[pos] - 'a']--;
        else if( b[pos] >= 'A' && b[pos] <= 'Z')
            let[b[pos] - 'A']--;
        pos++;
    }
    n = 0;
    for(int i = 0; i < 26; i++){
        if (let[i] < 0)
            n -= let[i];
        else if(let[i] > 0)
            n += let[i];
    } 

    if (n == 0) return true;
    return false;
}