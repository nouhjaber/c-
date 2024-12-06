#include <iostream>
#include <string>

using namespace std;

int main()  
{
    //? while loop with a break statement
    //? The break statement is used to exit the loop entirely, even if the condition hasn't been evaluated as false.
    string correctUsername = "admin";  // Correct username
    string correctPassword = "password123";  // Correct password
    string enteredUsername, enteredPassword;
    
    // Maximum number of attempts
    int attempts = 3;
    
    while (attempts > 0) {
        cout << "Enter username: ";
        cin >> enteredUsername;
        
        cout << "Enter password: ";
        cin >> enteredPassword;
        
        // Check if the username and password are correct
        if (enteredUsername == correctUsername && enteredPassword == correctPassword) {
            cout << "Login successful!" << endl;
            break;  // Exit the loop since the login is successful
        } else {
            attempts--;  // Decrease the attempts count
            cout << "Incorrect username or password. You have " << attempts << " attempts left." << endl;
        }
        
        if (attempts == 0) {
            cout << "Sorry, you've run out of attempts!" << endl;
        }
    }



    return 0;
}