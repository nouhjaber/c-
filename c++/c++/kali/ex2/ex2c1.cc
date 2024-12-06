#include <iostream>

using std::cout;
using std::cin;


int main () {

while (true)
{
    int day, month, year, lastDigit, leapYear = 0;

    cin >> day >> month >> year;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        leapYear = 1;
    }

    // validate year range (less than 3000) && month range (1-12)
    if (year >= 3000 || month <= 0 || month > 12) {
        break;
    }

    // validate days of month based on month and leap year
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day <= 0 || day > 31) {
            break;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day <= 0 || day > 30) {
            break;          
        }
    // For leap year february can have 29 days
    } else if (leapYear == 1) { 
        if (day <= 0 || day > 29) {
            break;
        }
        // For non-leap year, February can have 28 days
    } else { 
        if (day <= 0 || day > 28) {
            break;
        }
    }

    if (day >= 11 && day <= 13) {
        cout << day << "th ";
    }
    else {
        lastDigit = day % 10;
        if (lastDigit == 1) {
            cout << day << "st ";
        }
        else if (lastDigit == 2) {
            cout << day << "nd ";
        }
        else if (lastDigit == 3) {
            cout << day << "rd ";
        }
        else {
            cout << day << "th ";
        }
    }

    if (month == 1) cout << "January ";
    else if (month == 2) cout << "February ";
    else if (month == 3) cout << "March ";
    else if (month == 4) cout << "April ";
    else if (month == 5) cout << "May ";
    else if (month == 6) cout << "June ";
    else if (month == 7) cout << "July ";
    else if (month == 8) cout << "August ";
    else if (month == 9) cout << "September ";
    else if (month == 10) cout << "October ";
    else if (month == 11) cout << "November ";
    else if (month == 12) cout << "December ";

    cout << year << "\n";
    break;

}
    return 0;
}
