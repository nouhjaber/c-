#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main () 
{
    int age, gender;
// || gender > 1 || gender < 0
    cin >> gender >> age;

    if ((age < 0) || (age > 120) || (gender != 0 && gender != 1)) {
        cout << "bad input" << "\n";
    } else {
        if (age <= 18) {
            cout << "Minor";
        } else if (((gender == 0) && (age >= 84)) || ((gender == 1) && (age >= 81))) {
            cout << "Adult older than life expectancy";
        } else {
            cout << "Adult";
        }
    }
    
    return 0;
}