#include <iostream>
using namespace std;

int main() {
    int age, yearsOfExperience;

    // User input for age and years of experience
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your years of experience: ";
    cin >> yearsOfExperience;

    // Outer if statement to check if the age is eligible
    if (age >= 18) {
        // Nested if statement to check if the person has enough experience
        if (yearsOfExperience >= 2) {
            cout << "You are eligible to participate in the competition!" << endl;
        } else {
            cout << "You need at least 2 years of experience to participate." << endl;
        }
    } else {
        cout << "You must be at least 18 years old to participate." << endl;
    }

    return 0;
}
