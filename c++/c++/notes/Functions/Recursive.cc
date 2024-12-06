#include <iostream>

using namespace std;

/*
the logic 
Factorial of 5 (5!) is: 5!=5×4×3×2×1=120

*/


// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the recursive function and print the result
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
