#include <iostream>
#include <string>
#include <iomanip>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee() 
  : Employee(), salary_(0) {
  // deliberately empty
}

SalariedEmployee::SalariedEmployee(string name, double salary)
  : Employee(name), salary_(salary) {
  // deliberately empty
}

double SalariedEmployee::get_salary() const {
  return salary_;
}

void SalariedEmployee::set_salary(double salary) {
  salary_ = salary;
}

void SalariedEmployee::print_check() const {
  cout << get_name() <<':' << fixed << setprecision(2) 
       << "SE(" << salary_ << ")="  << get_net_pay();
}

void SalariedEmployee::calculate_net_pay(){
    set_net_pay(get_salary());
}