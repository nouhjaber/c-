#include <iostream>

using std::cout;
using std::cin;

int main () 
{
    int num1, num2;

    cin >> num2;
    cout << num2 << " ";

    while (cin >> num1)
    {
       if (num1 > num2) {
        cout << num1 << " ";
        num2 = num1;
       } else {
        break;
       }
    }
    


    return 0;
}