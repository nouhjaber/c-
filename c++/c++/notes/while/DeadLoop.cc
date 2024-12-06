#include <iostream>

using namespace std;

int main()  
{
        //? 3. while loop with a condition that never runs (Dead Loop) || (حلقة الويل بشرط لا يعمل أبدًا (حلقة ميتة))
    //? Sometimes, a loop may never run because the condition is initially false. This is useful for situations where we want to wait for user input or some condition to be met. ||
    //? يمكن أن تكون هذه الحلقات مفيدة في بعض السيناريوهات حيث تريد الانتظار حتى يتغير الشرط أو يتم استيفاء شرط معين.
    //?  تحدث حلقة ميتة عندما يكون الشرط غير صحيح في البداية، مما يعني أن الحلقة لن تعمل أبدًا. ومع ذلك،
    string password = "secret123";  // Correct password
    string userInput;
    int attempts = 0;
    const int maxAttempts = 3;

    while (userInput != password && attempts < maxAttempts) {
        cout << "Enter your password: ";
        cin >> userInput;
        attempts++;

        if (attempts >= maxAttempts) {
            cout << "Too many failed attempts. Access denied!" << endl;
            return 0; // Exit the program after too many failed attempts
        }
    }

    cout << "Password accepted. Welcome!" << endl;



    return 0;
}