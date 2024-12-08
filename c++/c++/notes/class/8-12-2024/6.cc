#include <iostream>

using namespace std;


const int class_size = 40;
const int num_of_courses = 7;

int main () 
{
    // worst sum as found = worst_sum
    //sum of grade in current cours = cur_sun
    // the index of the worst cours worst_cours
    int worst_sum = class_size * num_of_courses * 100 +1, cur_sun, worst_cours;

    int grades[class_size][num_of_courses];

    for (int cours = 0; cours < num_of_courses; cours++)
    {
        int curr_sum = 0;
        // sum the grades in course
        for (int stud = 0; stud < class_size; stud++)
        {
            curr_sum += grades[stud][cours];
        }
        if (curr_sum < worst_sum) 
        {
            worst_sum = curr_sum;
            worst_cours = cours;
        }
        
    }
    cout << worst_cours << " " << worst_sum/class_size;






    return 0;
}