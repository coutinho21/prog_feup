#include <vector>
#include <list>
#include <iostream>
#include <sstream>
 
using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end){
    ostringstream oss;
    oss << '['; 
    iterator it;
    for(it = start; it != end ; i++){
        oss << ' ' << *it;
    }
    oss << " ]";
    string str = oss.str();
    return str;
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b){
    int out = 0;
    iterator it;
    for(it = start; it != end ; i++){
        if(*it == a){
            *it = b;
            out++;
        }
    }
    return out;
}