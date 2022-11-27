#include <string>
#include <cstdlib>
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee()
  : name_("No name yet"), net_pay_(0) {
  // deliberately empty
}

Employee::Employee(string name)
  : name_(name), net_pay_(0) {
  // deliberately empty
}

string Employee::get_name() const {
  return name_;
}

double Employee::get_net_pay() const {
  return net_pay_;
}

void Employee::set_net_pay(double net_pay) {
  net_pay_ = net_pay;
}
