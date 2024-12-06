#include <iostream>

using namespace std;

int main() 
{
    int a = 5;
    int b = 10;

    cout << "Simple if statement:" << endl;
    if (a < b) {
        //? This block will execute because a is less than b || (سيتم تنفيذ هذا الكود لأن a أصغر من b)
        cout << "a is less than b" << endl;
    }


    return 0;
}