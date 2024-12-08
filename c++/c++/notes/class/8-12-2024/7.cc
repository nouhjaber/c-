#include <iostream>

using namespace std;


const int N = 3;

int main () 
{
    int martix[N][N];

    bool magic = true;

    int the_sum = 0;

    // sum main diggoral
    for ( int row = 0; row < N; row++)
    {
        the_sum += martix[row][row];
    }

    // check the rows
    for (int row = 0; row < N; row++)
    {
        int curr_sum = 0;
        for (int col = 0; col < N; col++)
        {
            curr_sum += martix[row][col];
        }
        if (curr_sum != the_sum)
        {
            magic = false;
            break;
        }
    }

    // check the column 
    for (int cool = 0; cool < N && magic; cool++)
    {
        int curr_sum = 0;
        for (int row = 0; row < N; row++)
        {
            curr_sum += martix[row][cool];
        }
        if (curr_sum != the_sum)
        {
            magic = false;
        }
    }

    if (magic) 
    {
        int curr_sum = 0;
        for (int row = 0; row < N; row++)
        {
            curr_sum += martix[row][N-row-1];
        }
        if (curr_sum != the_sum)
        {
            magic = false;
        }
        
    }
    if (magic) {
    cout << '+';
    } else {
        cout << '-';
    }
    
    



    return 0;
}