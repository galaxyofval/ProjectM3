#include "Date.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Test default constructor:\n";
    Date d1;
    cout << d1.printNumeric() << "\n\n";

    cout << "Test constructor with valid date:\n";
    Date d2(2, 28, 2009);
    cout << d2.printNumeric() << "\n\n";

    cout << "Test constructor with invalid month (45, 2, 2009):\n";
    Date d3(45, 2, 2009);
    cout << d3.printNumeric() << "\n\n";

    cout << "Test constructor with invalid day (2, 29, 2009):\n";
    Date d4(2, 29, 2009);
    cout << d4.printNumeric() << "\n\n";

    cout << "Test leap year (2, 29, 2008):\n";
    Date d5(2, 29, 2008);
    cout << d5.printNumeric() << "\n\n";

    cout << "Print formats:\n";
    cout << d5.printNumeric() << endl;
    cout << d5.printLong() << endl;
    cout << d5.printAlternate() << endl;
}
