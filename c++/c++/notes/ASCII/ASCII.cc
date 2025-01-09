#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void convertNumberToText() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // Check if the number is within the printable ASCII range
    if (num >= 0 && num <= 255) {
        cout << "The ASCII character is: " << static_cast<char>(num) << endl;
    } else {
        cout << "Invalid number for ASCII conversion." << endl;
    }
}

void convertTextToNumber() {
    string text;
    cout << "Enter text: ";
    cin.ignore();  // Clear the input buffer
    getline(cin, text);  // Allow spaces in the input text
    
    for (char c : text) {
        cout << c << ": " << int(c) << " ";
    }
    cout << endl;
}

void removeWhitespaceFromText() {
    string text;
    cout << "Enter text with spaces: ";
    cin.ignore();  // Clear the input buffer
    getline(cin, text);  // Allow spaces in the input text

    string result = "";
    for (char c : text) {
        if (c != ' ') {
            result += c;
        }
    }
    cout << "Text without spaces: " << result << endl;
}

void shiftTextByThreePositionsRight() {
    string text;
    cout << "Enter text: ";
    cin.ignore();  // Clear the input buffer
    getline(cin, text);  // Allow spaces in the input text
    
    for (char &c : text) {
        if (isalpha(c)) { 
            if (islower(c)) {
                // Shift lowercase characters to the right
                c = (c - 'a' + 3) % 26 + 'a'; 
            } else {
                // Shift uppercase characters to the right
                c = (c - 'A' + 3) % 26 + 'A';
            }
        }
    }
    cout << "Text after shifting: " << text << endl;
}

int main() {
    int choice;
    
    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Convert number to text (ASCII)" << endl;
        cout << "2. Convert text to number (ASCII values)" << endl;
        cout << "3. Remove white space from text" << endl;
        cout << "4. Shift text by 3 positions to the Right" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                convertNumberToText();
                break;
            case 2:
                convertTextToNumber();
                break;
            case 3:
                removeWhitespaceFromText();
                break;
            case 4:
                shiftTextByThreePositionsRight();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);
    
    return 0;
}
