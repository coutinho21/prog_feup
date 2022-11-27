#include <iostream>
#include <string>
using namespace std;

bool pangram(const string& s, string& m){
    int count[26] = { 0 };
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            count[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z'){
            count[c - 'A']++;
        }
    }

    int n = 0;
    for(int q = 0; q < 26; q++){
        if(count[q] == 0){
            m.push_back(q + 'a');
            n++;
        }
    }
    
    if(n == 0) return true;
    return false;
}