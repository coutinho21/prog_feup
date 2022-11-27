#include <iostream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

void HourlyEmployee::calculate_net_pay(){
    double net = get_hours()*get_rate();
    set_net_pay(net);
}

void SalariedEmployee::calculate_net_pay(){
    set_net_pay(get_salary());
}

void read_hours_worked(vector<Employee*> &employees){
    double hours;
    for(Employee* emp : employees){
        if(dynamic_cast<HourlyEmployee*>(emp)){
            cin >> hours;
            dynamic_cast<HourlyEmployee*>(emp)->set_hours(hours);
        }
    }
}

void calculate_pay(vector<Employee*>& employees){
    for(Employee* emp : employees){
        emp->calculate_net_pay();
    }
}

void print_checks(const vector<Employee*>& employees){
    for(Employee* emp : employees){
        cout << "| ";
        emp->print_check();
        cout << ' ';
    }
    cout << '|';
}