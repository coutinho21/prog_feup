struct time_of_day {
  unsigned char h;  // hours (0 to 23)
  unsigned char m;  // minutes (0 to 59)
};

struct interval {
  time_of_day start;  // start time
  time_of_day end;    // end time
};

#include <iostream>
using namespace std;
 
//! Prints the results.
void print(int d, const interval il) {
  cout << d << " ["
       << (int) il.start.h << ':' << (int) il.start.m << ','
       << (int) il.end.h   << ':' << (int) il.end.m 
       << "[\n";
}

int calc_min(interval intrv){
  return (intrv.end.h - intrv.start.h)*60 + intrv.end.m - intrv.start.m; 
}

bool isInInterval(time_of_day t, interval t2){
  if (t.h > t2.start.h && t.h < t2.end.h){
    return true;
  }
  if (t.h == t2.start.h && t.m >= t2.start.m){
    return true;
  }
  if (t.h == t2.end.h && t.m < t2.end.m){
    return true;
  }
  return false;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u){
  u.start = t;
  u.end = t;
  for(int i = 0; i < n ; i++){
    if (isInInterval(t,a[i])){
      if (a[i].start.h < u.start.h){
        u.start = a[i].start;
      }

      else if (a[i].start.h == u.start.h && a[i].start.m < u.start.m){
        u.start = a[i].start;
      }

      if (a[i].end.h > u.end.h){
        u.end = a[i].end;
      }

      else if (a[i].end.h == u.end.h && a[i].end.m > u.end.m){
        u.end = a[i].end;
      }
    }
  }
  return calc_min(u);
}