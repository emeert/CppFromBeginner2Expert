/*

    Exercise 3.

    Write a function "multiplication". When the function gets invoked - multiplication(); - the
    user is asked to input any two numbers: the one to multiply and the one to multiply with.
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



void multiplication(void)
{   
    double x,y; 
    cout << "Input Numbers x and y to multiply together x * y" << endl;
    cout << "x ="; 
    cin >> x; 
    cout << "y = "; 
    cin >> y; 

    cout << x << " * " << y << " = " << x*y << endl; 

}




int main()
{

    multiplication(); 



    return 0;
}