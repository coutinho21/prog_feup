#include <iostream>
#include <map>
 
using namespace std;

map<char, unsigned> map_roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
unsigned roman_to_arab(const string& roman){
    unsigned int num = 0;
    size_t len = roman.length();
    for(size_t i = 0; i < len ; i++){
        unsigned int curr = map_roman[roman[i]];
        if(i < len - 1 && curr < map_roman[roman[i+1]])
            num -= curr;
        else 
            num += curr;
    }
    return num;
}