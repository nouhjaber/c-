#include <iostream>

using namespace std;

// Function with one integer parameter
void print(int i) {
    cout << "Integer: " << i << endl;
}

// Function with one double parameter
void print(double d) {
    cout << "Double: " << d << endl;
}


int main() {
    // Calling the overloaded functions
    print(5);           // Calls print(int)
    print(3.14);        // Calls print(double)

    return 0;
}
