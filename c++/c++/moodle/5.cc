#include <iostream>
#include <cmath>

using std::cout;
using std::cin;


int main () 
{
    int num, i, c;

    i = 1;

    //user input
    cin >> num;  
    
    while (i <= num) {
    // column number for each row
    c = 1;

    while (c <= i)
    {
        cout << "*";
        c++;
    }
    cout << "\n";
    i++;

    }

    return 0;
}