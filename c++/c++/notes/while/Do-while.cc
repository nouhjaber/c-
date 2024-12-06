#include <iostream>
using namespace std;

int main() {

    //? Do-while loop (post-condition check)
    //?In contrast to a while loop, a do-while loop checks the condition after the loop body, 
    //?ensuring that the body is executed at least once. It's another variation of looping, but you asked for while specifically.
    int secretNumber = 7;
    int userGuess;

    // Do-while loop ensures the user will guess at least once
    do {
        cout << "Guess the secret number (between 1 and 10): ";
        cin >> userGuess;
        
        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number." << endl;
        }
    } while (userGuess != secretNumber);  // Continue until the guess is correct

    return 0;
}
