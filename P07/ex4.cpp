#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname){
    ifstream in(fname);
    double sum = 0;
    int ocurr = 0;
    double x;
    while(true){
        if(in.eof()) break;
        if(in >> x){ 
            sum += x;
            ocurr++;
        }
        else {
            in.clear();
            in.ignore(1);
        }
    }
    return sum/ocurr;
}