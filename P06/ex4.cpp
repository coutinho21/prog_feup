#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest_prefix(const vector<string>& v){
    string cmp = v[0];
    int n = 0;
    for(string el : v){
        for(size_t c = 0; c < el.length(); c++){
            if(el[c] == cmp[c])
                continue;
            else
                n++;
            
            if(n){
                cmp = el.substr(0,c);
                break;
            }
        }
    }
    return cmp;
}