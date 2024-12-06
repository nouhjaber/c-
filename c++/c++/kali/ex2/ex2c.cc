#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

string getDayOfWeek(int day, int month, int year) {
    // If the month is January or February, consider it as the 13th or 14th month of the previous year
    if (month <= 2) {
        month += 12;
        year -= 1;
    }

    // zeller's congruence formula
    int K = year % 100;           // The year within the century
    int J = year / 100;           // The century

    // zeller's formula to calculate the day of the week
    int formula = day + ((13 * (month + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J);
    int dayOfWeek = formula % 7;

    // Day switch
    switch (dayOfWeek) {
        case 0: return "st";
        case 1: return "sn";
        case 2: return "mo";
        case 3: return "th";
        case 4: return "we";
        case 5: return "tu";
        case 6: return "fr";
        default: return "";
    }
}

int main () {

while (true)
{


    int day, month, year, leapYear = 0;

    cin >> day >> month >> year;

    const string monthNames[] = {
      "January", "February", "March", "April", "May", "June",
      "July", "August", "September", "October", "November", "December"
    };

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


    // calling the function 
    string dayOfWeek = getDayOfWeek(day, month, year);
    cout  << day << dayOfWeek << " " << monthNames[month - 1] << " " << year;

}
    return 0;
}
