/*

    Exercise 2.

    Write a function "subtraction". When the function gets invoked - subtraction(); - the user
    is asked to input any two numbers: the one to subtract from and the one to subtract with.
    The calculation is printed out in the console.

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


void subtraction(void)
{   
    double x,y; 
    cout << "Input Numbers x and y to subtract from each other x - y" << endl;
    cout << "x ="; 
    cin >> x; 
    cout << "y = "; 
    cin >> y; 

    cout << x << " - " << y << " = " << x-y << endl; 

}




int main()
{

    subtraction(); 



    return 0;
}