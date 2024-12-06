#include <iostream>

using namespace std;

// Void function with no parameters
void myFirstVoid() {
    for (int i = 0; i < 10; i++)
    {
        cout << i << "\n";
    }
}

int main() 
{
    // Calling the void function
    myFirstVoid();
}