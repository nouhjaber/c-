#include <iostream>

using namespace std;

// Void function with  parameters
void goodDye(string name) {
    cout << "Goodbye " << name;
}

int main () {
    string name;

    cin >> name;

    goodDye(name);
}