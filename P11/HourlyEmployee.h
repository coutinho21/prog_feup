#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
 
#include <string>
#include "Employee.h"
 
class HourlyEmployee : public Employee {
public:
  HourlyEmployee();
  HourlyEmployee(std::string name, double wage_rate, double hours=0);
  void set_rate(double wage_rate);
  double get_rate() const;
  void set_hours(double hours);
  double get_hours() const;
  virtual void print_check() const;
  virtual void calculate_net_pay();
private:
  double wage_rate_; // amount paid per hour
  double hours_;     // hours worked
};
 
#endif
  