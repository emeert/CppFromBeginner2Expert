/*

Exercise 3.

Working on the program from the exercises 1 and 2 modify the code in order to let the user
place 'X' and 'O' signs (like in tick-tack-toe game). The signs should be placed in turns
(alternately, once X, once O to simulate two players playing).


eg.

    1     2     3



    4     5     6



    7     8     9


Player 1 inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     9

Player 2 inputted:
x: 1
y: 1

Output:

    O     2     3



    4     5     6



    7     X     9

    */

    
#include <iostream> 
#include <cstdlib>

using namespace std; 

// NOTE: This program assumes valid numeric input (1–3). No error handling for non-numeric input.
int main()
{
    char coord[3][3] = {'0'};
    char nr = '0'; 
    bool p2_Turn = false; // start with player 1 
    bool validMove = true; 

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
            if(p2_Turn  == false)
            {
                cout << "Player 1 input x and y coordinate to put 'X'" << endl;
            }
            else
            {
                cout << "Player 2 input x and y coordinate to put 'O'" << endl;
            }


            cout << "x = "; 
            cin >> in_X;
            cout << "y = "; 
            cin >> in_Y; 
    

            if ((in_X < 1) || (in_X > 3) || (in_Y < 1) || (in_Y > 3))
            {
                cout << "x  and y  must be between 1 and 3 inclusive " << endl;
                validMove = false;
            }
            else if(p2_Turn == false)
            {
                /*
                    If a coordinate is occupied we can't use it so tell the player to try again. 
                */
                if(coord[in_Y-1][in_X-1] == 'O' || coord[in_Y-1][in_X-1] == 'X' )
                {
                    validMove = false;
                    cout << "Someone already picked that try a different location!" << endl;
                }
                else if (validMove == true)
                {
                    coord[in_Y-1][in_X-1] = 'X';
                }
                
            }
            else
            {
                
                /*
                    If a coordinate is occupied we can't use it so tell the player to try again. 
                */
                if(coord[in_Y-1][in_X-1] == 'O' || coord[in_Y-1][in_X-1] == 'X' )
                {
                    validMove = false;
        
                    cout << "Someone already picked that try a different location!" << endl;
                }
                else if (validMove == true)
                {
                    coord[in_Y-1][in_X-1] = 'O';
                }
                
            }
          
            //Turn only increments if player makes a valid move. 
           if(validMove)
           {
                p2_Turn = !p2_Turn;
                system("cls");
           }

           //reset move validity flag. 
           validMove = true;
        }
        while(true);

        return 0; 
}