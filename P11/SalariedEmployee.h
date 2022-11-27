#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
 
#include <string>
#include "Employee.h"
 
class SalariedEmployee : public Employee {
public:
  SalariedEmployee();
  SalariedEmployee(std::string name, double salary);
  double get_salary() const;
  void set_salary(double salary);
  virtual void print_check() const;
  virtual void calculate_net_pay();
private:
  double salary_;
};
 
#endif
