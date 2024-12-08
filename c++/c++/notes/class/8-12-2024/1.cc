#include <iostream>

using namespace std;


const int class_size = 40;
const int num_of_courses = 7;

int main () 
{
    int grade[class_size][num_of_courses];

    // initalize the array
    for (int stud = 0; stud < class_size; stud++)
    {
        for (int course = 0; course < num_of_courses; course++)
        {
            grade[stud][course] = 0;
        }
        
    }

        for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 40; j++) {
            cout << grade[i][j] << endl;
        }
    }
    



    return 0;
}