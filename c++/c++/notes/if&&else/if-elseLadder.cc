#include <iostream>

using namespace std;


int main () 
{
   //? 3. **if-else if-else ladder**: Allows checking multiple conditions in sequence. || (**تسلسل if-else if-else**: يسمح بالتحقق من عدة شروط بالتسلسل)
    int num;
    int even = 0, odd = 0, pos = 0, zero = 0, neg= 0;

    cin >> num;

    
    if (num % 2 == 0) {
        even++;   
    } else {
        odd++;
    }

    if (num > 0) {
        pos++;
    } else if (num == 0) {
        zero++;
    } else {
        neg++;
    }
    

    // output 
    cout << even << " " << odd <<  '\n';
    cout << pos  << " " <<zero << " " << neg << "\n";


    return 0;
}
