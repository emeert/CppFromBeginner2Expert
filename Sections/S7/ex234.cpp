/*
    Exercise 4.

    Write a function "division". When the function gets invoked - division(); - the user is
    asked to input any two numbers: the one to divide and the one to divide by. The calculation
    is printed out in the console.

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


int main()
{

    division(); 



    return 0;
}