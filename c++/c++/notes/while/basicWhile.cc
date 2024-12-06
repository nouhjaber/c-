#include <iostream>

using namespace std;

int main()  
{

    //? Basic while loop
    //?This is the most common form of a while loop, where the loop continues executing as long as a condition is true. ||
    //? هذه هي أكثر أنواع حلقات الويل شيوعًا حيث تستمر الحلقة في التنفيذ طالما أن الشرط الذي يتم التحقق منه يبقى صحيحًا
    int i = 1;
    while (i <= 5) {
        cout << "i = " << i << endl;
        i++;
    }

    return 0;
}