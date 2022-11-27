#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
  Employee();
  Employee(std::string name);
  virtual ~Employee() { }
  std::string get_name() const;
  double get_net_pay() const;
  void set_net_pay(double net_pay);
  virtual void calculate_net_pay() = 0;
  virtual void print_check() const = 0;
private:  // could be protected
  std::string name_;
  double net_pay_;
};

#endif
