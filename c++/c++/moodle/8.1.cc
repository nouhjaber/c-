#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() 
{ 
    int numbers[6];
    int positive = 0, zero = 0, negative = 0;


    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }


    for (int num = 0; num < 6; num++)
    {
        if (numbers[num] > 0) 
        {
            positive++;
        } else if (numbers[num] < 0) 
        {
            negative++;
        } else {
            zero++;
        }
    }
    cout << positive << " " << zero << ' ' << negative << endl;
    
    





    return 0;
}