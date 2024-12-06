#include <iostream>
#include <cmath>
#include <limits>

using std::cout;
using std::cin;
using std::endl;


int main() 
{
    double a, b, c;
    char choice;
    bool validInput = false;

     while (true) {
        cout << "\nWhich side would you like to calculate? (a/b/c): ";
        cin >> choice;

        if (choice == 'a' || choice == 'A') {
            cout << "Enter side B: ";
            cin >> b;
            cout << "Enter hypotenuse C: ";
            cin >> c;

            if (b <= 0 || c <= 0 || c <= b) {
                cout << "Invalid input. The hypotenuse must be greater than the other side and positive.\n";
                continue;
            }

            // Calculate side A using Pythagorean theorem
            a = sqrt(c * c - b * b);
            cout << "The length of side A is: " << a << endl;

        } else if (choice == 'b' || choice == 'B') {
            cout << "Enter side A: ";
            cin >> a;
            cout << "Enter hypotenuse C: ";
            cin >> c;

            if (a <= 0 || c <= 0 || c <= a) {
                cout << "Invalid input. The hypotenuse must be greater than the other side and positive.\n";
                continue;
            }

            // Calculate side B using Pythagorean theorem
            b = sqrt(c * c - a * a);
            cout << "The length of side B is: " << b << endl;

        } else if (choice == 'c' || choice == 'C') {
            cout << "Enter side A: ";
            cin >> a;
            cout << "Enter side B: ";
            cin >> b;

            if (a <= 0 || b <= 0) {
                cout << "Invalid input. Both sides must be positive.\n";
                continue;
            }

            // Calculate the hypotenuse C using Pythagorean theorem
            c = sqrt(a * a + b * b);
            cout << "The length of the hypotenuse (C) is: " << c << endl;

        } else {
            cout << "Invalid choice. Please enter 'a', 'b', or 'c'.\n";
            continue;
        }

        // Ask if the user wants to calculate another side
        cout << "\nWould you like to calculate another side? (y/n): ";
        char repeat;
        cin >> repeat;
        if (repeat == 'n' || repeat == 'N') {
            cout << "Goodbye!\n";
            break;
        }
    }

    return 0;
}