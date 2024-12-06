#include <iostream>

using namespace std;

const int classSize = 40;

int main() 
{

    int bible[classSize] = { 10, 2, 80, 90, 20, 50, 10};

    int max = bible[0];

    for (int stud=0; stud < classSize; stud++)
    {
        if (bible[stud] > max) {
            max = bible[stud];
        }
    }
    cout << max;

    for (int stud = 0; stud< classSize; stud++)
    if (bible[stud] == max) 
    {
        cout <<  " " << stud;
    }
    


    return 0;
}