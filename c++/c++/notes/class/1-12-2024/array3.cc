#include <iostream>

using namespace std;

const int classSize = 40;

int main () 
{

    int ids[classSize] = {
        39, 89, 80, 32, 12
    };

    int wanted;

    cin >> wanted;

    bool found = false;

    for (int stud = 0; stud < classSize; stud++)
    {
        if (ids[stud] == wanted) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "+";
    }else {
        cout << "-";
    }
    


    return 0;
}