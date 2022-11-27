#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void calc_medians(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line, first;
    vector<double> lst; 
    double x;
    while(getline(in,line)){
      istringstream iss(line);
      iss >> first;
      if(first == "#" || first == "##")
        continue;
      while(iss >> x) lst.push_back(x);
      int n = lst.size();
      sort(lst.begin(), lst.end());
      if(n %2 != 0)
        out << first << " " << fixed << setprecision(1) << lst[n/2] << endl;
      else
        out << first << " " << fixed << setprecision(1) << 0.5 * (lst[n/2 - 1] + lst[n/2]) << endl;
      lst = {};
    }
}