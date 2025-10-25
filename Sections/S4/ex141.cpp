#include <iostream>

using namespace std; 


/*

    Exercise 1.

    Write an application that asks the user to input his age. Then using the conditional
    operator (ternary operator) check if the user age is higher or equal to 18. 

    eg.

    User inputted:
    14

    Output:
    Your are not an adult !

    

*/
int main()
{

    //Declare userAge variable and initilize it to 0. 
    int userAge = 0; 
    // Ask the user their age. 
    cout << "What is your age? ";
    //User inputs thier Age. 
    cin >> userAge;
    cout << endl; 

    // Check if the user is an adult or not. Print out if they are an adult. 
    (userAge >= 18) ? cout << "You are an adult !" << endl : cout << "You are not an adult !" << endl; 
    
}