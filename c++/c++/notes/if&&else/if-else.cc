#include <iostream>

using namespace std;


int main () 
{
    //? 2. **if-else statement**: Executes one block of code if the condition is true, and another if it's false. || 
    //? (**جملة if-else**: تنفذ الكود في block `if` إذا كان الشرط صحيحًا، أو الكود في block `else` إذا كان الشرط غير صحيح.)
    int a = 5;
    int b = 10;
    
    cout << "\nif-else statement:" << endl;
    if (a > b) {
        //? This block will NOT execute because a is not greater than b || (هذا الكود لن ينفذ لأن a ليس أكبر من b)
        cout << "a is greater than b" << endl;
    } else {
        //? This block will execute because a is NOT greater than b || (هذا الكود سيتم تنفيذه لأن الشرط في if غير صحيح (a ليس أكبر من b))
        cout << "a is NOT greater than b" << endl;
    }


    return 0;
}