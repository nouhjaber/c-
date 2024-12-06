#include <iostream>
using namespace std;

int main() {
    // Using multiple initializations and increments
    for (int i = 0, j = 10; i <= 5 && j >= 5; i++, j--) {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
