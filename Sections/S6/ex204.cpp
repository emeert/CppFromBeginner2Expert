/*

Exercise 4.

Modify the program from the last three exercises in order to prevent situations where:
- values of x or y coordinates aren't in the interval <1;3>
- the inputted cell already has a 'X' or 'O' sign on it
*/

/*
    Bonus I will make winning conditions.

    Winning conditions would be if you get 3 Xs in a row i assume a for loop could be used to determine this. 

    [0][0] [0][1] [0][2]
    [1][0] [1][1] [1][2]
    [2][0] [2][1] [2][2]
    
    if we are using i and j  what does 3 in a row look like? 

    Winning games 
    [0][0] == [1][1] == [2][2]   across the diangonal  [i][i]
    [2][0] == [1][1] == [0][2]   across the antidiangonal [i][?] 



    [0][0] == [1][0] == [2][0]   across column 0 [i][0]
    [0][1] == [1][1] == [2][1]   across column 1 [i][1]
    [0][2] == [1][2] == [2][2]   across column 2 [i][2]

    [0][0] == [0][1] == [0][2]   across row 0   [0][i]
    [1][0] == [1][1] == [1][2]   across row 1   [1][i]
    [2][0] == [2][1] == [2][2]   across row 2   [2][i]



*/

    
#include <iostream> 
#include <cstdlib>

using namespace std; 



int  check_Game_Result (char arr[3][3]) 
{
    int p1_Point = 0, p2_Point = 0; 

    //check for diagaonal win? 
    for(int i = 0; i < 3; i++)
    {
        if(arr[i][i] == 'X')
        {
            p1_Point++;
        }
        else if(arr[i][i] == 'O')
        {
            p2_Point++;
        }

        if(p1_Point == 3)
        {
            p1_Point = 0;
            p2_Point = 0; 
            cout << "Player 1 wins across the diagonal" << endl;

            return 1; 
        }
        else if (p2_Point == 3)
        {
            p1_Point = 0;
            p2_Point = 0; 
            cout << "Player 1 wins across the diagonal" << endl;

            return 1; 
        }
    
    }

    //clear the points after diagonal is checked  
    p1_Point = 0;
    p2_Point = 0; 




    //check for antidiagaonal win? 
    for(int i = 0; i < 3; i++)
    {
        if(arr[(2-i)][i] == 'X')
        {
            p1_Point++;
        }
        else if(arr[(2-i)][i] == 'O')
        {
            p2_Point++;
        }

        if(p1_Point == 3)
        {
            cout << "Player 1 wins across the antidiagonal" << endl;

            return 1; 
        }
        else if (p2_Point == 3)
        {
            cout << "Player 2 wins across the antidiagonal" << endl;

            return 1;  
        }
    
    }

    //clear the points after antidiagonal is checked  
    p1_Point = 0;
    p2_Point = 0; 

    //Check for a row win 
    for(int i = 0; i < 3; i++)
    {
        //When checking rows score needs to reset on each pass of i
        p1_Point = 0;
        p2_Point = 0; 
        
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 'X')
            {
                p1_Point++;
            }
            else if(arr[i][j] == 'O')
            {
                p2_Point++;
            }

            if(p1_Point == 3)
            {
                cout << "Player 1 wins across row " << i+1 << endl;
        
                return 1; 
            }
            else if (p2_Point == 3)
            {
                cout << "Player 2 wins across row " << i+1 << endl;

                return 1;  
            }
        }
    
    }

    //Check for a column win 
    for(int i = 0; i < 3; i++)
    {
        //When checking columns score needs to reset on each pass of i
        p1_Point = 0;
        p2_Point = 0; 
        
        for(int j = 0; j < 3; j++)
        {
            if(arr[j][i] == 'X')
            {
                p1_Point++;
            }
            else if(arr[j][i] == 'O')
            {
                p2_Point++;
            }

            if(p1_Point == 3)
            {
                cout << "Player 1 wins across column " << i+1 << endl;
        
                return 1; 
            }
            else if (p2_Point == 3)
            {
                cout << "Player 2 wins across column " << i+1 << endl;

                return 1;  
            }
        }
    
    }

    bool isDraw = true; 
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] != 'X' && arr[i][j] != 'O')
            {
                isDraw = false; 
                break;
            }
        }
        if(isDraw)break;
    }

    if(isDraw)
    {
        cout << "The game ended in a draw." << endl;
        return 2; 
    }



    return 0; 

}


        








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

           if(check_Game_Result(coord))
           {
                 break;
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