#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() 
{
    int age, gender;
    cin >> gender >> age;

    if (age < 0 || age > 120 || (gender != 0 && gender != 1)) {
        cout << "bad input" << "\n";
    } else {
        cout << (age <= 18 ? "Minor" : 
                 ((gender == 0 && age >= 84) || (gender == 1 && age >= 81) ? "Adult older than life expectancy" : "Adult"));
    }
    
    return 0;
}
