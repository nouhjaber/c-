/*******************************************************************************************************************************************
Ex #a
Written by: nouh jaber, 
This program simulates the calculation of the differences of numbers.

Input:  the (num1, num2, num3) three integer variables.

Output: all nine differences.

********************************************************************************************************************************************/

//-------------- include section --------------
#include <iostream>

//-------------- using section --------------
using std::cin;
using std::cout;

//-------------- main --------------
int main() {
    // variables
    int num1, num2, num3;

    // user input
    cin >> num1 >> num2 >> num3;

    // output the differences 
    cout << num1 -num1 << " " << num1 -num2 << " " << num1 -num3 << "\n";
    cout << num2 -num1 << " " << num2 -num2 << " " << num2 -num3 << "\n";
    cout << num3 -num1 << " " << num3 -num2 << " " << num3 -num3 << "\n";

    return 0;
}
