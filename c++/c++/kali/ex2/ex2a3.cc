#include <iostream>

using std::cout;
using std::cin;


int main ()
{
    int num1, num2, num3, num4;
    int even = 0, odd = 0, pos = 0, zero = 0, neg= 0;

    cin >> num1 >> num2 >> num3 >> num4;

    
    if (num1 % 2 == 0) {
        even++;   
    } else {
        odd++;
    }

    if (num1 > 0) {
        pos++;
    } else if (num1 == 0) {
        zero++;
    } else {
        neg++;
    }

    // second number (num2)
    if (num2 % 2 == 0) {
        even++;
    } else {
        odd++;
    }

    if (num2 > 0) {
        pos++;
    } else if (num2 == 0) {
        zero++;
    } else {
        neg++;
    }

    //third number (num3)
    if (num3 % 2 == 0) {
        even++;
    } else {
        odd++;
    }

    if (num3 > 0) {
        pos++;
    } else if (num3 == 0) {
        zero++;
    } else {
        neg++;
    }

    // fourth number (num4)
    if (num4 % 2 == 0) {
        even++;
    } else {
        odd++;
    }

    if (num4 > 0) {
        pos++;
    } else if (num4 == 0) {
        zero++;
    } else {
        neg++;
    }
    
    
    

    // output 
    cout << even << " " << odd <<  '\n';
    cout << pos  << " " <<zero << " " << neg << "\n";


    return 0;
}