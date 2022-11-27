#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry {
  size_t row;
  size_t col;
  int value;
};

typedef vector<sm_entry> smatrix;

//! Print a sparse matrix.
void print(const smatrix& sm) {
  cout << "[ ";
  for (sm_entry e : sm) {
    cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
  }
  cout << "]\n";
}

sm_entry getMin(smatrix s){
    sm_entry min = s[0];
    for(auto i = 1; i < int(s.size());i++){
        if(s[i].row < min.row)
            min = s[i];
        else if(s[i].row == min.row && s[i].col < min.col)
            min = s[i];
    }
    return min;
}

void sum(const smatrix& a, const smatrix& b, smatrix& r){
    int found = 0;
    for(sm_entry v1: a){
        for(sm_entry v2 : b){
            if(v1.row == v2.row && v1.col == v2.col){
                found++;
                int res = v1.value + v2.value;
                if(res != 0)
                    r.push_back({v2.row,v2.col,res});
                break;
            }
        }
        if (found == 0)
                r.push_back(v1);
        found = 0;
    }
    for(sm_entry v1: b){
        for(sm_entry v2 : a){
            if(v1.row == v2.row && v1.col == v2.col){
                found++;
                int res = v1.value + v2.value;
                if(res != 0){
                    bool flag = false;
                    for(sm_entry e: r){
                        if(e.row == v2.row && e.col == v2.col && e.value == res){
                            flag = true;
                            break;
                        }
                    }
                    if(!flag)
                        r.push_back({v2.row,v2.col,res});
                }
                break;
            }
        }
        if (found == 0)
                r.push_back(v1);
        found = 0;
    }
    smatrix out = {};
    int it = int(r.size());
    for(auto q = 0; q < it; q++){
        sm_entry frst = getMin(r);
        out.push_back(frst);
        smatrix h = {};
        for(int i = 0; i < int(r.size()); i++){
            if(r[i].row == frst.row && r[i].col == frst.col)
                continue;
            h.push_back(r[i]);
        }
        r = h;
    }
    r = out;
}