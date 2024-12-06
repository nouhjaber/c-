#include <iostream>

using std::cout;
using std::cin;


int main ()
{
    int num1, num2, num3, num4, i;
    int even = 0, odd = 0, pos = 0, zero = 0, neg= 0;

    cin >> num1 >> num2 >> num3 >> num4;


    const int userInput[] = {num1, num2, num3, num4};
    
    for (i = 0; i < 4; i++)
    {

     if (userInput[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        // check if the number is positive, zero, or negative
        if (userInput[i] > 0) {
            pos++;
        } else if (userInput[i] == 0) {
            zero++;
        } else {
            neg++;
        }
    }
    
    
    cout << even << " " << odd << "\n";
    cout << pos << " " << zero << " " << neg;
    
    return 0;
}