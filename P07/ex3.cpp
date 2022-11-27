#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void normalise(const string& input_fname, const string& output_name){
    ifstream in(input_fname);
    ofstream out(output_name);
    string line;
    string end = "";
    while(getline(in,line)){
        istringstream iss(line);
        string wrd;
        for(char& c: line) c = toupper(c);
        line.erase(0,line.find_first_not_of(" "));
        line.erase(line.find_last_not_of(" ")+1);
        if(line.length() > 0) out << line + '\n';
    }
}