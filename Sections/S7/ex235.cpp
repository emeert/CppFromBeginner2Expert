/*

    Exercise 5.

    Write a function "exponentiation". When the function gets invoked - exponentiation(); - the user
    is asked to input any two numbers: the base and the exponent (n-th power). The calculation is
    printed out in the console.

*/



#include <iostream> 
#include <cmath>

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




void division(void)
{   
    double x,y = 0; 
    cout << "Input Numbers x and y to divide  each other x / y" << endl;
    cout << "x ="; 
    cin >> x; 
    do
    {
        cout << "y = "; 
        cin >> y; 

        if(y == 0)
        {
            cout << "y cannot be 0 try again" << endl;
        }
    
    } while (y==0);
    


    cout << x << " / " << y << " = " << x/y << endl; 
}


void exponentiation()
{
    double x,y; 
    cout << "Input Numbers x and y where x is the base and y is its exponent so we can calculate  x^y" << endl;
    cout << "x ="; 
    cin >> x; 
    cout << "y = "; 
    cin >> y; 

    cout << x << " ^ " << y << " = " << pow(x,y) << endl; 

}



int main()
{

    exponentiation(); 



    return 0;
}