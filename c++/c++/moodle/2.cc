#include <iostream>

using std::cout;
using std::cin;

int main() 
{
    int num1, num2, num3;
    
   
    cin >> num1 >> num2 >> num3;
   

    
 if (num1 > 0 && num2 > 0 && num3 > 0) {
        cout << "+\n";  
    } 
    
   else if(num1 == 0 && num2 == 0 && num2 ==0){
        cout << "0\n";
    }
  else  if (num1 < 0 && num2 < 0 && num3 < 0) {
        cout << "-";  
    }

     return 0;
 }
