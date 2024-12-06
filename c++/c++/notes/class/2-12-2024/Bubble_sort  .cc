#include <iostream>

using namespace std;

const int N = 6;  

//! bubble sort  
int main() 
{
    int grades[N] = {5, 3, 17, 9, 6};
     
    for (int round = 0; round < N-1; round++)
    {
       for (int place = 0; place < N - round - 1; place++)
       {
        if (grades[place] > grades[place+1])
        {
            int temp = grades[place];
            grades[place] = grades[place+1];
            grades[place+1] = temp;
        }
       } 
    }
    
    //? output 
    for (int i = 0; i < 6; i++) {
        cout << grades[i] << " "; 
    }
   

     


    return 0;
}