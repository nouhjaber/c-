/*******************************************************************************************************************************************
Ex #c 
Written by: nouh jaber, id = 215185844, login: nouhja
This program simulates the calculation of a students final grade.

Input: The students (assignment, assignment2, exam) grades.

Output: The students final grade.

********************************************************************************************************************************************/

//-------------- include section --------------
#include <iostream>

//-------------- using section --------------
using std::cin;
using std::cout;


//-------------- main --------------
int main () {
    //variables 
    double assig1, assig2, exam, grade ;

    // input
    cin >> assig1 >> assig2 >> exam; 

    //calculate 
    grade = (exam * 0.7) + (assig1 * 0.1) + (assig2 * 0.2);

    // output
    cout << grade << "\n";

    return 0;
}