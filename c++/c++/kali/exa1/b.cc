/*******************************************************************************************************************************************
Ex #b
Written by: nouh jaber, 
This program simulates the calculation of the area and the perimeter of a triangle.

Input:  the (a, b, c) sides.

Output: The (area, perimeter) of a triangle.

********************************************************************************************************************************************/

//-------------- include section --------------
#include <iostream>
#include <cmath> 

//-------------- using section --------------
using std::cin;
using std::cout;

//-------------- main --------------
int main() {
    // variables 
    double a, b, c, s;
    double area, perimeter;

    // input from the user
    cin >> a >> b >> c;

    // calculate semi (s)
    s = (a + b + c) / 2;

    // heron formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    perimeter = a + b + c;

    // Outputs 
    cout << area << " " << perimeter;
    return 0;
}
