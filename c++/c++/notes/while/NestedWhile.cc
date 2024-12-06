#include <iostream>

using namespace std;

int main()  
{
    //? Nested while loops
    //? A nested while loop is a while loop inside another while loop. This is useful when you need to perform a series of tasks repeatedly inside another repetitive task.
    int i = 1;  // Outer loop counter (row)
    
    // Outer while loop: loop through rows (1 to 10)
    while (i <= 10) {
        int j = 1;  // Inner loop counter (column)
        
        // Inner while loop: loop through columns (1 to 10)
        while (j <= 10) {
            cout << i * j << "\t";  // Print product of i and j
            j++;  // Increment inner loop counter
        }
        
        cout << endl;  // New line after each row
        i++;  // Increment outer loop counter
    }



    return 0;
}