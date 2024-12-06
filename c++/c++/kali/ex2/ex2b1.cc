#include <iostream>

using std::cin;
using std::cout;


int main() {
    // Declare variables
    int num1, num2, num3, maxValue, r1, r2, r3, r4, r5, r6;

    // Taking user inputs
    cin >> num1 >> num2 >> num3;

    // Calculate all different values and store them 
    r1 = (num1 + num2) * num3;
    r2 = (num1 + num3) * num2;
    r3 = (num2 + num3) * num1;

    r4 = num1 * num3 + num2;
    r5 = num2 * num3 + num1;
    r6 = num1 * num2 + num3;

    // Initialize maxValue as r1   
    maxValue = r1;

    // Check each result to find the max expression
    if (r2 > maxValue) {
        maxValue = r2;
    }
    else if (r3 > maxValue) {
        maxValue = r3;
    }
    else if (r4 > maxValue) {
        maxValue = r4;
    }
    else if (r5 > maxValue) {
        maxValue = r5;
    }
    else if (r6 > maxValue) {
        maxValue = r6;
    }

    // finding and outputting expression for maximum value and the value
    if (maxValue == r1) {
        cout << "(" << num1 << "+" << num2 << ")*" << num3 << "=" << maxValue << "\n";
    } else if (maxValue == r2) {
        cout << "(" << num1 << "+" << num3 << ")*" << num2 << "=" << maxValue << "\n";
    } else if (maxValue == r3) {
        cout << "(" << num2 << "+" << num3 << ")*" << num1 << "=" << maxValue << "\n";
    } else if (maxValue == r4) {
        cout << num1 << "*" << num3 << "+" << num2 << "=" << maxValue << "\n";
    } else if (maxValue == r5) {
       cout << num2 << "*" << num3 << "+" << num1 << "=" << maxValue << "\n";
    } else if (maxValue == r6) {
        cout << num1 << "*" << num2 << "+" << num3 << "=" << maxValue << "\n";
    }
 
    return 0;
}
