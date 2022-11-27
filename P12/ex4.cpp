#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
using namespace std;

string cat_keys(list<map<string, unsigned>> lst){
    map<string,unsigned> min;
    unsigned int val = UINT_MAX;
    for(auto m : lst){
        for (const auto el : m) {
            if(el.second < val){
                val = el.second;
                min = m;
            }
        }
    }
    string out = "";
    for (const auto elm : min) {
        out += elm.first;
    }

    return out;
}