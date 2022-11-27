#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include "Page.h"
#include "Book.h"
 
using namespace std;

void Book::build_index(const set<string>& words){
  size_t lines = 1;
  for(auto pag: book_){
    size_t line_num = pag.get_num_lines();
    for(size_t i = 0; i < line_num; i++){
        string line = pag.get_line(i);
        istringstream iss(line);
        string curr;
        while(iss >> curr){
        for(auto word: words){
            if(word == curr) index_[curr].insert(lines);
        }
        }  
    }
    lines++;
  }
}