#include <iostream>

using namespace std;

const int N = 15;  
const bool t = true;
const bool f = false;

//! sieue
int main() 
{
    bool sieue[N];
     
    for (int place = 2; place < N; place++)
    {
       sieue[place] = t;
    }
    for (int place = 2; place < N/2; place++)
    {
        if (sieue[place] == t)
        {
            for (int mul = 2; place * mul < N; mul++)
            {
                sieue[place*mul] = f;
            }
            
        }
        
    }

    for (int place = 2; place< N; place++)
    {
        if (sieue[place] == t)
        {
            cout << place << " ";
        }
        
    }
    cout << "\n";
    
    
    // //? output 
    // for (int i = 0; i < 16; i++) {
    //     cout << sieue[i] << " "; 
    // }
   

     


    return 0;
}