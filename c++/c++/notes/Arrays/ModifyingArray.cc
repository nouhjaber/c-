#include <iostream>

using namespace std;

int main () 
{
    int arr[5] = {10, 20, 30, 40, 50};   // 1D array

    int arr2D[3][3] = {                // 2D array
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //bool array
    bool arrbo[5] = {true, false, true, true, false};

    // Modifying elements using indexing
    arr[1] = 200; // Change the second element

    arr2D[1][1] = 20;  // Modify middle element

    arr[0] = false;  // Modify arr[0] to false
    arr[4] = true;   // Modify arr[4] to true


    // Modifying elements using a for loop
    for (int i = 0; i < 5; i++) {
        arr[i] = arr[i] * 2; // Double each element of arr
    }

    // Modifying elements of arr2D
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2D[i][j] = arr[i] * 2;  // Double corresponding element in arr and assign to arr2D
        }
    }

    // Modifying elements of bool array buy using a for loop
    for (int i = 0; i < 5; ++i) {
        if (arr[i] == true) {
            arr[i] = false;  // Change true to false
        } else {
            arr[i] = true;   // Change false to true
        }
    }
    // or 

    for (int i = 0; i < 5; ++i) {
        arr[i] = false;  // Set all elements to false
    }


    // Output modified 1D array
    cout << "Modified 1D array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output modified 2D array
    cout << "Modified 2D array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
