#include <iostream>

using std::cout;
using std::cin;

const int N = 6;


int main() 
{
    bool userInput[N] = {false};

    int num;

    while (true)
    {
        cin >> num;

        if (num == -1) {
            break;
        } else if (num >=0 && num < N) {
            userInput[num] = true;
        }
    }

    for (int i = 0; i < N; i++) {
        if (userInput[i]) {
            cout << i << " "; 
        }
        
    }
    
    



    return 0;
}