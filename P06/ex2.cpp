#include <string>
#include <vector>
#include <iostream>
using namespace std;

void split(const string& s, vector<string>& v){
    string str = "";
    for(char c : s){
        if(c == ' '){
            if(str != ""){
                v.push_back(str);
                str = "";
            }
        }
        else
            str += c;
    }
    if(str != "")
        v.push_back(str);
}