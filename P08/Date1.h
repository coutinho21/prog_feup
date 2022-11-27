#include <iostream>
#include <iomanip>

class Date {
  public:
    Date();                             // Default constructor
    Date(int year, int month, int day); // Constructor with parameters
    int get_year() const;               // Year accessor
    int get_month() const;              // Month accessor
    int get_day() const;                // Day accessor
    void write() const {                // Writes the date as "yyyy/mm/dd"
      std::cout << std::setfill('0')
                << std::setw(4) << year << '/'
                << std::setw(2) << month << '/'
                << std::setw(2) << day;
    }

  private:
    int year;   // Private attribute year
    int month;  // Private attribute month
    int day;    // Private attribute day
};