/*

    Exercise 1.

    Write a function "addition". When the function gets invoked - addition(); - the user is
    asked to input any two numbers which are added together. The calculation is printed out
    in the console.

*/

#include <iostream> 

using namespace std; 

void addition(void)
{   
    double x,y; 
    cout << "Input Numbers x and y to add together" << endl;
    cout << "x ="; 
    cin >> x; 
    cout << "y = "; 
    cin >> y; 

    cout << x << " + " << y << " = " << x+y << endl; 

}


int main()
{

    addition(); 



    return 0;
}