#include <iostream>

using namespace std;

const int classSize = 40;

int main() 
{

    int bible[classSize] = { 10, 2, 80, 90, 20, 50, 10, 90};
    int bestStud[classSize];

    int bestStudCount = 0;

    int max = bible[0];
    bestStud[0] = 0;

    for (int stud = 1; stud < classSize; stud++)
    {
        if (bible[stud] > max) {
            max = bible[stud];
            bestStud[0] = stud;
            bestStudCount = 1;
        } else if (bible[stud] == max) 
        {
            bestStud[bestStudCount] = stud;
            bestStudCount++;
        }
    }
    cout << max << " ";
    

    for (int stud = 0; stud < bestStudCount; stud++)
    {
    cout << bestStud[stud] << " ";
    }
    


    return 0;
}