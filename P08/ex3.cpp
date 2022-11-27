#include <iostream>
#include <iomanip>
#include <sstream>
#include "Date2.h"

using namespace std;

int Date::num_days(int year, int month){
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days[1] = 29;
    return days[month-1];
}

Date::Date(){
    year=1, month=1, day=1;
}

Date::Date(int year, int month, int day){
    if(year >= 1 && year <= 9999 && month >= 1 && month <= 12 && day >= 1 && day <= num_days(year,month)){
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else{
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
}

Date::Date(const std::string& year_month_day){
    istringstream iss(year_month_day);
    int year,month,day;
    char x1,x2;
    if(iss >> year >> x1 >> month >> x2 >> day && x1 == '/' && x2 == '/' && year >= 1 && year <= 9999 && month >= 1 && month <= 12 && day >= 1 && day <= Date::num_days(year,month)){
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else{
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
}

int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const{
    return day;
}

bool Date::is_valid() const{
    if(get_year() == 0 || get_month() == 0 || get_day() == 0)
        return false;
    return true;
}