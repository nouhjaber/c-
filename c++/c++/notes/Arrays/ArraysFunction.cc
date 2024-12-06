#include <iostream>
using namespace std;

// Function that takes a 2D array using pointer arithmetic
void modify2DArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(arr + i * cols + j) = *(arr + i * cols + j) * 2;  // Double each element using pointer
        }
    }
}

// Function to display the 2D array using pointer arithmetic
void display2DArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(arr + i * cols + j) << " ";  // Access element using pointer arithmetic
        }
        cout << endl;
    }
}

int main() {
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original 2D array:" << endl;
    display2DArray((int*)arr2D, 3, 3);

    modify2DArray((int*)arr2D, 3, 3);  // Pass 2D array as pointer

    cout << "Modified 2D array:" << endl;
    display2DArray((int*)arr2D, 3, 3);

    return 0;
}
