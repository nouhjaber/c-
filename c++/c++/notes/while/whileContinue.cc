#include <iostream>

using namespace std;

int main()  
{
    //?4. while loop with a continue statement || (حلقة while مع تعليمة continue)
    //?The continue statement causes the loop to immediately skip to the next iteration without executing the remaining code in the loop body. ||
    //? تعليمة continue في حلقة while تُستخدم لتجاوز الجزء المتبقي من الكود داخل الحلقة والانتقال مباشرة إلى التكرار التالي.
    int i = 1;  // Starting point
    int limit = 10;  // Limit to loop up to

    // While loop to iterate from 1 to 10
    while (i <= limit) {
        if (i % 2 == 0) {
            // If the number is even, skip the rest of the loop and continue
            i++;
            continue;
        }
        // Print only odd numbers
        cout << i << " ";
        i++;
    }
    
    //? text now 
    bool documentProcessed = false;

    while (!documentProcessed) {
        // Simulate checking a document's status
        cout << "Checking document status..." << endl;

        if (documentProcessed) {
            // Skip processing if the document is already processed
            continue;
        }

        // If document is not processed, process it
        cout << "Processing document..." << endl;
        
        // Now mark the document as processed
        documentProcessed = true;  
    }


    return 0;
}