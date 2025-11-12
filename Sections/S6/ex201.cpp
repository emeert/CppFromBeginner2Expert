/*
Exercise 1.

Write a program that prints out in the console a simple representation of 3x3 plane. The plane
should be filled with numbers from 1 to 9 (stored in 3x3 array representing x,y coordinates of
the plane).



    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 1) is 1 (array[0][0]).


*/
#include <iostream> 

using namespace std; 


int main()
{
    int coord[3][3] = {0};
    int nr = 0; 

   
    /*
     the array is going to be 3 rows and 3 columns 
        | 0   1   2 
      --------------
      0 | 1   2   3
      1 | 4   5   6
      2 | 7   8   9

    */
        for(int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
             
                coord[i][j] = ++nr;
                cout.width(5);
                cout <<  coord[i][j];

            }
            cout << endl;
        
         
        }
        return 0; 
}