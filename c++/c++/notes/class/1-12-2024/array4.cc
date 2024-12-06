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

    int lo = 0;
    int hi = classSize - 1;
    while (lo <= hi && !found)
    {
        int med = (lo + hi)/2;

        if (ids[med] == wanted) 
        {
            found = true;
            break;
        } else if (ids[med] < wanted)
        {
            lo = wanted+1;
        } else {
            hi = med-1;
        }
    }
    cout << ((found) ? "+" : "-");

    return 0;
}