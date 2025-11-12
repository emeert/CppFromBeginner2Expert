/*

Exercise 2.

Modify the program from exercise 1 so that the user can now place an 'X' sign on desired cell
of the plane. After printing out the 1 to 9 on the plane, the user is asked to input x and y
coordinate to put 'X'. The plane is printed again with the modified value on the inputted
coordinates. Using system("cls") clear the screen so there is only one plane printed in the console.
If you use mac check this topic: http://stackoverflow.com/questions/27616522/cannot-use-systemcls-in-xcode-in-mac
The program should work in an infinite loop so the user can fill whole plane with 'X'-s.

eg.

    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 3) is 7 (array[2][0]).

User inputted: 
x: 3
y: 3

Output:

    1     2     3



    4     5     6



    7     8     X


User inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     X


*/


#include <iostream> 
#include <cstdlib>

using namespace std; 


int main()
{
    char coord[3][3] = {'0'};
    char nr = '0'; 

    int in_X, in_Y; 


   
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

        do 
        {


            for(int i = 0; i < 3; i++)
            {
                cout << endl << endl;
                for (int j = 0; j < 3 ; j++)
                {
                
                    cout.width(5);
                    cout <<  coord[i][j];

                }
                cout << endl << endl;
            }

            cout << endl;
            cout << "nput x and y coordinate to put 'X'" << endl;

            cout << "x = "; 
            cin >> in_X;
            cout << "y = "; 
            cin >> in_Y; 

            if((in_X < 0) || (in_Y < 0) || (in_X > 4)|| (in_Y > 4))
            {
                cout << "x  and y  must be between 1 and 3 inclusive " << endl;
                break;
            }
            else
            {
                coord[in_Y-1][in_X-1] = 'X';
                system("cls");
            }




        }
        while(true);

        return 0; 
}