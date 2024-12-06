#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

     int arr2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


    // Accessing array elements using indices
    cout << "Fifth element: " << arr[4] << endl;  // arr[4] -> 50
    cout << "2D array \n";
    cout << "Element at [1][2]: " << arr2D[1][2] << endl;


    cout << "Array of integers (numbers): ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    cout << "2D array\n";
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element at [" << i << "][" << j << "]: " << arr2D[i][j] << endl;
        }
    }

    return 0;
}
