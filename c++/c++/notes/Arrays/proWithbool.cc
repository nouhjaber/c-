#include <iostream>
using namespace std;

int main() {
    // Define an array of 5 rooms, with some initially booked
    bool rooms[5] = {true, false, true, false, true};  // Room 1, 3, and 5 are booked, others are available

    int choice, roomNumber;

    while (true) {
        // Display the menu for user options
        cout << "\nHotel Room Booking System\n";
        cout << "1. Check room availability\n";
        cout << "2. Book a room\n";
        cout << "3. Cancel booking\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:  // Check room availability
                cout << "\nRoom Status:\n";
                for (int i = 0; i < 5; i++) {
                    // Using if-else to check if the room is booked or available
                    if (rooms[i]) {
                        cout << "Room " << i + 1 << ": Booked" << endl;
                    } else {
                        cout << "Room " << i + 1 << ": Available" << endl;
                    }
                }
                break;

            case 2:  // Book a room
                cout << "\nEnter the room number (1-5) to book: ";
                cin >> roomNumber;

                // Check if the room number is valid
                if (roomNumber >= 1 && roomNumber <= 5) {
                    if (rooms[roomNumber - 1] == true) {
                        cout << "Room " << roomNumber << " is already booked.\n";
                    } else {
                        rooms[roomNumber - 1] = true;  // Book the room
                        cout << "Room " << roomNumber << " has been successfully booked.\n";
                    }
                } else {
                    cout << "Invalid room number. Please choose a room between 1 and 5.\n";
                }
                break;

            case 3:  // Cancel booking
                cout << "\nEnter the room number (1-5) to cancel booking: ";
                cin >> roomNumber;

                // Check if the room number is valid
                if (roomNumber >= 1 && roomNumber <= 5) {
                    if (rooms[roomNumber - 1] == false) {
                        cout << "Room " << roomNumber << " is already available.\n";
                    } else {
                        rooms[roomNumber - 1] = false;  // Cancel the booking
                        cout << "Room " << roomNumber << " booking has been successfully canceled.\n";
                    }
                } else {
                    cout << "Invalid room number. Please choose a room between 1 and 5.\n";
                }
                break;

            case 4:  // Exit the program
                cout << "\nExiting the system. Thank you for using the hotel booking system.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}
