#include <iostream>

using namespace std;


const int class_size = 40;
const int num_of_courses = 7;

int main () 
{
    int grade[class_size][num_of_courses];

    // reade the data (by course)
    for (int course = 0; course < num_of_courses; course++)
    {
        for (int stud = 0; stud < class_size; stud++)
        {
            cin >> grade[stud][course];
        }
        
    }


    



    return 0;
}