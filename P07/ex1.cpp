#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;

int count(const string& fname, const string& word){
    ifstream in(fname);
    string str = word;
    for(char& c : str) c = tolower(c);
    int occur = 0;
    while(true){
        if(in.eof()) break;
        string curr;
        in >> curr;
        for(char& c : curr) c = tolower(c);
        if(curr == str) occur++;
    }
    return occur;
}