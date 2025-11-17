/*
        Exercise 6.

        Copy the functions and their declarations created in the exercises from 1 to 5 and write sixth
        function "chooseOperation". The "chooseOperation" function should take one char parameter. The
        body of the function should contain a switch for the choice parameter which depending on the
        user input should invoke the corresponding mathematical functions from the exercises 1 to 5.

        Write a simple calculator program that asks the user to choose a mathematical operation to perform
        by inputting an operator symbol: '+' - addition, '-' - subtraction, '*' - multiplication,
        '/' - division, '^' - exponentiation. The mathematical symbol is used as the parameter for
        chooseOperation function. The calculator should work in an infinite loop.

        eg.

        User inputted:
        +

        Output:
        The result of addition function


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


void chooseOperation()
{
        cout << "Choose your Operation" << endl;
        cout << "+. addition" << endl;
        cout << "-. subtraction" << endl;
        cout << "*. multiplication" << endl;
        cout << "/. division" <<endl;
        cout << "^. exponentiation" << endl;

        char operation; 
        cin >> operation; 

        switch (operation)
        {
                case '+':
                {
                        addition();
                }
                break;
                
                case '-':
                {
                        subtraction();
                }
                break;
                
                case '*':
                {
                        multiplication();
                }
                break;
                
                case '/':
                {
                        division();
                }
                break;
                
                case '^':
                {
                        exponentiation();
                }
                break;



        }




}


int main()
{

    while(true)
    {
        chooseOperation(); 
        cout << endl;
    }



    return 0;
}