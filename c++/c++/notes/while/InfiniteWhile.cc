#include <iostream>

using namespace std;

int main()  
{
    //? 2. Infinite while loop || (حلقة الويل لانهائية)
    //? An infinite loop occurs when the condition is always true or not defined in a way that it can terminate naturally. 
    //?Typically, you control an infinite loop with a break statement. ||
    //? تحدث حلقة الويل لانهائية عندما يكون الشرط دائمًا صحيحًا أو غير مُحدد بطريقة يمكن أن تنتهي بها الحلقة بشكل طبيعي
    //?
     while (true) {  // Infinite loop
    string input;
    cout << "Type 'exit' to stop the loop: ";
    cin >> input;

    if (input == "exit") {  // Condition to break the loop
        cout << "Exiting the loop..." << endl;
        break;  // Break out of the loop
    }

    cout << "You typed: " << input << endl;
    }

    cout << "The loop has ended." << endl;



    return 0;
}