#include <iostream>

using std::cout;
using std::cin;

int main() {
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++) {

        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
