#include <iostream>

using std::cout;
using std::cin;


int main() 
{ 
    int userInput[6];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;


    for (int i = 0; i < 6; i++) {
        cin >> userInput[i];
    }


    for (int i = 0; i < 6; i++)
    {
        if (userInput[i] < 0) 
        {
            negativeCount++;
        } else if (userInput[i] > 0) 
        {
            positiveCount++;
        } else {
            zeroCount++;
        }
    }
    cout << positiveCount << " " << zeroCount << ' ' << negativeCount << "\n";
    
    





    return 0;
}