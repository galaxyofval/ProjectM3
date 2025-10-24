#include "Date.h"
#include <iostream>
#include <array>
using namespace std;

static const array<string, 12> monthNames = {
    "January","February","March","April","May","June",
    "July","August","September","October","November","December"
};

// Takes in a date.
Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

// Checks if the year is a leap year
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0) && ((y % 100 != 0) || (y % 400 == 0));
}

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

// Returns the last day of the month.
int Date::lastDayOfMonth(int m, int y) const {
    static const int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2 && isLeapYear(y))
        return 29;
    return days[m - 1];
}

int Date::lastDay(int m, int y) const { return lastDayOfMonth(m, y); }
int Date::lastDay() const { return lastDayOfMonth(month, year); }

// Checks if the date is valid.
bool Date::isValidDate(int m, int d, int y) const {
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > lastDayOfMonth(m, y)) return false;
    if (y < 1) return false;
    return true;
}

// If the date is bad in any way, then return the default date.
void Date::setDate(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m; day = d; year = y;
    } else {
        month = 1; day = 1; year = 1900;
        cout << "Invalid date — defaulting to 1/1/1900\n";
    }
}

// Prints out the dates within different formats.
string Date::printNumeric() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::printLong() const {
    return monthNames[month - 1] + " " + to_string(day) + ", " + to_string(year);
}

string Date::printAlternate() const {
    return to_string(day) + " " + monthNames[month - 1] + " " + to_string(year);
}
