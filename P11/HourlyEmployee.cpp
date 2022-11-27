#include <iostream>
#include <iomanip>
#include <string>
#include "HourlyEmployee.h"

using namespace std;
 
HourlyEmployee::HourlyEmployee() 
  : Employee(), wage_rate_(0), hours_(0) {
  // deliberately empty
}
 
HourlyEmployee::HourlyEmployee(string name, double wage_rate, double hours)
  : Employee(name), wage_rate_(wage_rate), hours_(hours) {
  // deliberately empty
}
 
void HourlyEmployee::set_rate(double wage_rate) {
  wage_rate_ = wage_rate;
}
 
double HourlyEmployee::get_rate() const {
  return wage_rate_;
}
 
void HourlyEmployee::set_hours(double hours) {
  hours_ = hours;
}
 
double HourlyEmployee::get_hours() const {
  return hours_;
}

void HourlyEmployee::print_check() const {
  cout << get_name() <<':'<< fixed << setprecision(2) 
       << "HE(" << hours_ << ',' << wage_rate_ << ")=" <<  get_net_pay();
}

void HourlyEmployee::calculate_net_pay(){
    double net = get_hours()*get_rate();
    set_net_pay(net);
}