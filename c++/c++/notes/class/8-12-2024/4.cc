#include <iostream>

using namespace std;


const int class_size = 40;
const int num_of_courses = 7;

int main () {
    int grade[class_size][num_of_courses];

    int stud, END = -1;

    cin >> stud;

    while (stud !=  END)
    {
        int course;
        cin >> course;
        if (stud >= 0 && stud < class_size && course > 0 && course < num_of_courses) 
        {
            cin >> grade[stud][course];
        }else 
        {
            cout << " bad input\n";
        }
        cin >> stud;
    }
    








    return 0;
}