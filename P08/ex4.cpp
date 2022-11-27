#include <iostream>
#include <iomanip>
#include <sstream>
#include "Date3.h"
 
using namespace std;

int Date::num_days(int year, int month){
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days[1] = 29;
    return days[month-1];
}

Date::Date(){
    yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day){
    if(year >= 1 && year <= 9999 && month >= 1 && month <= 12 && day >= 1 && day <= num_days(year,month))
        yyyymmdd = to_string(year) + to_string(month) + to_string(day);
    
    else
        yyyymmdd = "00000000";
    
}

Date::Date(const std::string& year_month_day){
    istringstream iss(year_month_day);
    int year,month,day;
    char x1,x2;
    if(iss >> year >> x1 >> month >> x2 >> day && x1 == '/' && x2 == '/' && year >= 1 && year <= 9999 && month >= 1 && month <= 12 && day >= 1 && day <= num_days(year,month)){
        yyyymmdd = to_string(year) + to_string(month) + to_string(day);
        if(month < 10)
            yyyymmdd = yyyymmdd.substr(0,4) + '0' + to_string(month) + to_string(day);
        if(day < 10)
            yyyymmdd = yyyymmdd.substr(0,6) + '0' + to_string(day);
    }
    else
        yyyymmdd = "00000000";
    
}

int Date::get_year() const{
    return stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const{
    return stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const{
    return stoi(yyyymmdd.substr(6, 2));
}

bool Date::is_valid() const{
    if(yyyymmdd == "00000000")
        return false;
    return true;
}