#include <iostream>

using namespace std;  

/*
Explanation of the Example:

    The switch statement checks the value of day.
    Since day = 3, it matches case 3 and prints "Wednesday".
    The break statement ensures that the program exits the switch after executing the corresponding block of code.
    If day had been something other than 1-7, the default block would have been executed, printing "Invalid day".

Important Points to Remember:

    The switch expression must evaluate to a value that can be compared to constants (usually an integer, character, or enumeration).
    The break statement is crucial to avoid "falling through" to the next case. If you remove break, the program will execute the next case even if the expression doesn't match.
    The default case is optional, but it’s good practice to include it to handle unexpected or invalid values.
*/

int main() {
    int day = 3;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            std::cout << "Tuesday" << endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day!" << std::endl;
            break;
    }

    return 0;
}
