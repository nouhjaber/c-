#include <iostream>

using namespace std;


const int class_size = 40;
const int num_of_courses = 7;

int main() 
{
    int grade[class_size][num_of_courses];

    int excel;
    // do not put the counter = 0 here 
    //  

    for (int stud = 0; stud < class_size; stud++)
    {
        int counter;
        for (int course = 0; course < num_of_courses; course++)
        {
            if ( grade[stud][course] >= excel)
            {
                counter++;
            }
        }
        cout << stud << " " << counter;
        
    }





    return 0;
}