#include <iostream> 

using namespace std; 

/*
    Exercise 1.
    Create a two dimensional 3x3 array of integers that holds some numbers of your choice (each array cell should be
    initialised in program).

    Write a program that asks the user to input x and y numbers (from 1 to 3). The program prints out
    in the console the value that is stored in the array cell numbered by x, y coordinates. 
    Take into consideration that coordinates starts counting from ONE when array starts counting from ZERO.

    eg.

    User inputted:
    x: 2
    y: 2

    Output:
    cout << array[1][1];
*/


int main()
{

    //Initialize a 3x3 array with preset values. 
    int arr[3][3] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9}
    };

    cout << " I have a 3x3 array pick x, y such that array[x][y] and ill provide you the element" << endl;

    int x; 
    int y; 

    //read the user input 
    cout << "x =" ;
    cin >> x; 
    cout << "y = "; 
    cin >> y;

    
    //validate that x and y are within the 1-3 range. 
    if((x > 3 || x < 1)||(y > 3||y < 1))
    {
        cout << "This is a 3x3 array and your selection is out of scope" << endl;
    }
    else
    {
        //adjust the array so that user input translates to the correct indices. 
        int value = arr[x-1][y-1];
        cout << "The element you are looking at is array["<< x << "]["<< y <<"] = "<< value <<endl;
    }


}