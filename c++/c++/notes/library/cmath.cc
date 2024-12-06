#include <iostream>
#include <cmath>

using namespace std;

// Function to show basic arithmetic operations
void showBasicArithmeticFunctions(double x, double y) {
    cout << "\n--- Basic Arithmetic Functions ---\n";
    
    // abs() returns the absolute value of the argument.
    // If the argument is negative, it returns the corresponding positive value.
    // Example: abs(-4.5) returns 4.5
    cout << "Absolute value of " << x << " is: " << abs(x) << "\n";

    // fmod(x, y) returns the remainder of the division of x by y.
    // fmod(x, y) = x - y * floor(x / y)
    // Example: fmod(5.3, 2) returns 1.3 because 5.3 - 2 * floor(5.3 / 2) = 1.3
    cout << "fmod(" << x << ", " << y << ") is: " << fmod(x, y) << "\n";
    
    double intpart;
    // modf(x, &intpart) splits x into its fractional and integer parts.
    // It returns the fractional part of x, while the integer part is stored in the pointer intpart.
    // Example: modf(5.75) will return 0.75 and store 5 in intpart.
    cout << "modf(" << x << ") -> fractional part: " << modf(x, &intpart) 
         << ", integer part: " << intpart << "\n";

    // ceil(x) returns the smallest integer value greater than or equal to x.
    // Example: ceil(4.3) returns 5.0
    cout << "ceil(" << x << ") is: " << ceil(x) << "\n";

    // floor(x) returns the largest integer value less than or equal to x.
    // Example: floor(4.7) returns 4.0
    cout << "floor(" << x << ") is: " << floor(x) << "\n";
}

// Function to show power and exponential functions
void showPowerAndExponentialFunctions(double x, double y) {
    cout << "\n--- Power and Exponential Functions ---\n";
    
    // pow(x, y) calculates x raised to the power of y.
    // Example: pow(2, 3) returns 8 (2^3 = 8)
    cout << x << " raised to the power of " << y << " is: " << pow(x, y) << "\n";

    // sqrt(x) calculates the square root of x.
    // Example: sqrt(9) returns 3.0
    cout << "Square root of " << y << " is: " << sqrt(y) << "\n";

    // exp(x) calculates e raised to the power of x (e^x), where e is Euler's number (approximately 2.71828).
    // Example: exp(1) returns e ≈ 2.71828
    cout << "e^" << x << " is: " << exp(x) << "\n";

    // log(x) calculates the natural logarithm (log base e) of x.
    // Example: log(1) returns 0, as ln(1) = 0
    // Note: log(x) is only defined for positive values of x.
    cout << "log(" << abs(x) << ") is: " << log(abs(x)) << "\n";

    // log10(x) calculates the logarithm of x to the base 10.
    // Example: log10(100) returns 2, because log10(100) = 2
    cout << "log10(" << abs(x) << ") is: " << log10(abs(x)) << "\n";
}

// Function to show trigonometric functions
void showTrigonometricFunctions(double x, double y) {
    cout << "\n--- Trigonometric Functions (in radians) ---\n";
    
    // sin(x) returns the sine of x (x should be in radians).
    // Example: sin(0) returns 0
    cout << "sin(" << x << ") is: " << sin(x) << "\n";

    // cos(x) returns the cosine of x (x should be in radians).
    // Example: cos(0) returns 1
    cout << "cos(" << x << ") is: " << cos(x) << "\n";

    // tan(x) returns the tangent of x (x should be in radians).
    // Example: tan(0) returns 0
    cout << "tan(" << x << ") is: " << tan(x) << "\n";

    // asin(x) returns the arc sine (inverse sine) of x, in radians.
    // The input must be between -1 and 1, as sine values lie in this range.
    // Example: asin(0.5) returns 0.5236 (about 30 degrees).
    cout << "asin(" << y << ") is: " << asin(y) << "\n";

    // acos(x) returns the arc cosine (inverse cosine) of x, in radians.
    // The input must be between -1 and 1, as cosine values lie in this range.
    // Example: acos(0.5) returns 1.0472 (about 60 degrees).
    cout << "acos(" << y << ") is: " << acos(y) << "\n";

    // atan(x) returns the arc tangent (inverse tangent) of x, in radians.
    // Example: atan(1) returns 0.7854 (about 45 degrees).
    cout << "atan(" << x << ") is: " << atan(x) << "\n";

    // atan2(y, x) returns the arc tangent of the two variables y and x. It handles the correct quadrant for the angle.
    // Example: atan2(1, 1) returns 0.7854 (about 45 degrees).
    cout << "atan2(" << y << ", " << x << ") is: " << atan2(y, x) << "\n";
}

// Function to show hyperbolic functions
void showHyperbolicFunctions(double x) {
    cout << "\n--- Hyperbolic Functions ---\n";
    
    // sinh(x) returns the hyperbolic sine of x.
    // Example: sinh(0) returns 0
    cout << "sinh(" << x << ") is: " << sinh(x) << "\n";

    // cosh(x) returns the hyperbolic cosine of x.
    // Example: cosh(0) returns 1
    cout << "cosh(" << x << ") is: " << cosh(x) << "\n";

    // tanh(x) returns the hyperbolic tangent of x.
    // Example: tanh(0) returns 0
    cout << "tanh(" << x << ") is: " << tanh(x) << "\n";
}

// Function to show special functions for checking values
void showSpecialFunctionsForCheckingValues(double x) {
    cout << "\n--- Special Functions for Checking Values ---\n";
    
    // isnan(x) checks if x is NaN (Not-a-Number).
    // Example: isnan(NAN) returns true, isnan(5) returns false.
    cout << "isnan(" << x << ") is: " << isnan(x) << "\n";

    // isfinite(x) checks if x is finite (i.e., not NaN or infinite).
    // Example: isfinite(1) returns true, isfinite(INFINITY) returns false.
    cout << "isfinite(" << x << ") is: " << isfinite(x) << "\n";

    // isinf(x) checks if x is infinite.
    // Example: isinf(INFINITY) returns true, isinf(1) returns false.
    cout << "isinf(" << x << ") is: " << isinf(x) << "\n";

    // isnormal(x) checks if x is a normal number (neither NaN nor infinity).
    // Example: isnormal(1) returns true, isnormal(NAN) returns false.
    cout << "isnormal(" << x << ") is: " << isnormal(x) << "\n";

    // signbit(x) checks if the sign bit of x is negative.
    // Example: signbit(-5) returns true, signbit(5) returns false.
    cout << "signbit(" << x << ") is: " << signbit(x) << "\n";
}

// Function to show mathematical constants
void showMathematicalConstants() {
    cout << "\n--- Mathematical Constants ---\n";
    
    // M_PI is a predefined constant representing the value of Pi (π), approximately 3.14159.
    cout << "M_PI (Pi) is: " << M_PI << "\n";

    // M_E is a predefined constant representing Euler's number (e), approximately 2.71828.
    cout << "M_E (Euler's number) is: " << M_E << "\n";

    // M_LOG2E is the logarithm of e (Euler's number) to the base 2, approximately 1.4427.
    cout << "M_LOG2E (log base 2 of e) is: " << M_LOG2E << "\n";

    // M_LOG10E is the logarithm of e to the base 10, approximately 0.4343.
    cout << "M_LOG10E (log base 10 of e) is: " << M_LOG10E << "\n";

    // M_LN2 is the natural logarithm of 2, approximately 0.6931.
    cout << "M_LN2 (ln(2)) is: " << M_LN2 << "\n";

    // M_LN10 is the natural logarithm of 10, approximately 2.3026.
    cout << "M_LN10 (ln(10)) is: " << M_LN10 << "\n";
}

int main() {
    // Test values
    double x = -4.5;
    double y = 2.0;

    // Show various mathematical functions
    showBasicArithmeticFunctions(x, y);
    showPowerAndExponentialFunctions(x, y);
    showTrigonometricFunctions(x, y);
    showHyperbolicFunctions(x);
    showSpecialFunctionsForCheckingValues(x);
    showMathematicalConstants();

    return 0;
}
