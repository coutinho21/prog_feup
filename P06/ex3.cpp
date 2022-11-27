#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(const vector<T>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << "]\n";
}
template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
  vector<T> new_v = {};
  for(T val: v){
    if(val < min)
        new_v.push_back(min);
    else if (val > max)
        new_v.push_back(max);
    else
        new_v.push_back(val);
  }
  v = new_v;
}