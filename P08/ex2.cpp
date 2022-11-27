#include <iostream>
#include <iomanip>
#include "Date1.h"
 
using namespace std;

Date::Date(){
    year=1, month=1, day=1;
}

Date::Date(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
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

bool is_before(const Date& date1, const Date& date2){
    if (date1.get_year() < date2.get_year())
        return true;
    else if(date1.get_year() == date2.get_year()){
        if(date1.get_month() < date2.get_month())
            return true;
        else if(date1.get_month() == date2.get_month()){
            if(date1.get_day() < date2.get_day())
                return true;
        }
    }
    return false;
}