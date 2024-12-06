#include <iostream>

using std::cout;
using std::cin;


int main()
{
    int num;
    
    cin >> num;
    
    if(num >= 95 && num <= 100) {
        cout << "excellent";
    }else if(num >= 85 && num <= 94) {
        cout << "very good";
    }else if(num >= 75 && num <= 84) {
        cout << "good";
    }else if(num >= 65 && num <= 74) {
        cout << "almost good";
    }else if (num >= 55 && num <= 64) {
        cout << "pass";
    } else if (num >= 0 && num <= 54) {
        cout << "fail";
    }else if(num >= 100 || num < 0){
        cout << "error";
    }
    
    
    return 0;
}
