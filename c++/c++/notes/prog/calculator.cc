/*
  
*/

#include <iostream>
#include <limits>
#include <cmath>

using std::cout;
using std::string;
using std::cin;
using std::max;
using std::min;

// void round (roundType) {

// }

int main() {
    char op, rounded;
    double num1, num2, result;
    string roundType;
    bool validInput = false;


while (true)
{
        cout << "***************** CACULATOR ******************* \n";

    while (true) {
        cout << "Enter operator (+ - * /): ";
        cin >> op;
        
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            validInput = true;
            break;  
        } else {
            cout << "Invalid input! Please enter one of (+ - * /).\n";
        }
    }

    while (true)
    {
        cout << "do you want to round the result(y/n)";
        cin >> rounded;
        
        if (rounded == 'n' || rounded == 'N') {
            break;

        } else if(rounded == 'y' || rounded == 'Y'){
            cout << "for round up: up for round down: do";
            cin >> roundType;

            if(roundType == "up" || roundType == "UP"){
                break;

            } else if (roundType == "do" || roundType == "DO"){
                break;
            }else
            {
                cout << "Invalid input!.\n";
            }
            
        }else{
            cout << "Invalid input!.\n";
        }
    
        
    }
    


   
    while (true) {
        cout << "Enter #1 (a number): ";
        cin >> num1;
        
        if (cin.fail()) {
            cin.clear();  // Clear the error flag
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  //? Ignore  invalid input
            cout << "Invalid input! Please enter a valid number for #1.\n";
        } else {
            break;  // Valid exit loop
        }
    }

    while (true) {
        cout << "Enter #2 (a number): ";
        cin >> num2;
        
        if (cin.fail()) {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            cout << "Invalid input! Please enter a valid number for #2.\n";
        } else {
            break; 
        }
    }

    //? Handling calculations 
        switch (op) {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << "\n";
        break;
    case '/':
        // Handle division by zero
        if (num2 == 0) {
            cout << "Error: Cannot divide by zero!" << "\n";
        } else {
            result = num1 / num2;
            cout << "Result: " << result << "\n";
        }
        break;
    default:
        cout << "Unexpected error occurred.\n";
        break;
    }

    cout << "\nWould you like to calculate again? (y/n): ";
        char repeat;
        cin >> repeat;
        if (repeat == 'n' || repeat == 'N') {
            cout << "Goodbye!\n";
            break;

    return 0;
    }
}

}