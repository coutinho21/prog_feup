#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
struct wcresult {
  unsigned int lines;
  unsigned int words; 
  unsigned int bytes; 
};

wcresult wc(const string& filename){
    ifstream in(filename);
    wcresult out {0,0,0};
    string line;
    while(getline(in,line)){
        out.lines++;
        out.bytes += line.length() + 1;
        istringstream iss(line);
        string wrd;
        while(iss >> wrd) out.words++;
    }
    return out;
}