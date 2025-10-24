#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    bool isValidDate(int m, int d, int y) const;
    int lastDayOfMonth(int m, int y) const;

public:
    // Constructor
    Date(int m = 1, int d = 1, int y = 1900);
    // Mutator
    void setDate(int m, int d, int y);
    // Accessors
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    // Leap year functions
    bool isLeapYear() const;
    bool isLeapYear(int y) const;
    // Last day functions
    int lastDay() const;
    int lastDay(int m, int y) const;
    // Print functions
    string printNumeric() const;       // MM/DD/YYYY
    string printLong() const;          // Month Day, Year
    string printAlternate() const;     // Day Month Year
};

#endif
