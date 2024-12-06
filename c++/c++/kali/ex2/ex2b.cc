/*******************************************************************************************************************************************
Ex2b
Written by: nouh jaber, 
This program simulates the calculation of six different mathematical expression and finding that maxvalue 

Input:  the (num1, num2, num3) three integer variables.

Output: The mathematical expression and maxvalue 

********************************************************************************************************************************************/

//-------------- include section --------------
#include <iostream>
#include <string>

//-------------- using section --------------
using std::string;
using std::cout;
using std::cin;
using std::to_string;

//-------------- main --------------
int main () 
{
    // declare  variables 
    int num1, num2, num3, maxValue, r1, r2, r3, r4, r5, r6;
    string maxExpression;

    // taking user inputs
    cin >> num1 >> num2 >> num3;

      
    // calculation all different values and storing them 
    r1 = (num1 + num2) * num3;
    r2 = (num1 + num3) * num2;
    r3 = (num2 + num3) * num1;

    r4 = num1 * num3 + num2;
    r5 = num2 * num3 + num1;
    r6 = num1 * num2 + num3;
    // declare maxValue is = r1   
    maxValue = r1;

    // declare expression
    // call to_string function so it can make the number in to string
    maxExpression = "(" + to_string(num1) + " + " + to_string(num2) + ") * " + to_string(num3);


    // we test every value aginst maxValue(r1) 
    // if the value is more then maxValue wil change to the bigger value && the expression will change
    if (r2 > maxValue) {
        maxValue = r2;
        maxExpression = "(" + to_string(num1) + " + " + to_string(num3) + ") * " + to_string(num2);
    } 
    if (r3 > maxValue) {
        maxValue = r3;
        maxExpression = "(" + to_string(num2) + " + " + to_string(num3) + ") * " + to_string(num1);
    } 
    if (r4 > maxValue) {
        maxValue = r4;
        maxExpression = to_string(num1) + " * " + to_string(num3) + " + " + to_string(num2);
    } 
    if (r5 > maxValue) {
        maxValue = r5;
        maxExpression = to_string(num2) + " * " + to_string(num3) + " + " + to_string(num1);
    } 
    if (r6 > maxValue) {
        maxValue = r6;
        maxExpression = to_string(num1) + " * " + to_string(num2) + " + " + to_string(num3);
    }

    // output the expression with the maximum value
    cout << maxExpression << " = " << maxValue;

    return 0;
}
