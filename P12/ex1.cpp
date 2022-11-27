#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cfloat>

using namespace std;

//! Show file name and its contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

bool average(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    if(in.fail())
        return false;
    ofstream out(output_fname);   
    string line;
    int lines = 0;
    while(getline(in,line)){
        double sum = 0, num;
        int ocurrences = 0;
        istringstream iss(line);
        while(iss >> num){
            sum += num;
            ocurrences++;
        }
        out << fixed << setprecision(3) << sum/ocurrences << endl;
        lines++;
    }
    out << "lines=" << lines << endl;
    return true;
}