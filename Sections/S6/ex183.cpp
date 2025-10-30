#include <iostream>
using namespace std;

/*


        Exercise 3.

        Write a program that asks the user to input any number (integer or floating point) and
        the n-th power (integer) the number should be raised to. Then calculate the result of the
        exponentiation of this number to the said power.

        eg.

        User inputted:
        Number: 2
        N-th power: 5

        Output:
        The number 2 to the power of 5 is equal to 32.

*/

/**
 * @brief Calculates the result of raising a number to an integer power.
 *
 * This function performs exponentiation using loop-based multiplication,
 * handling positive, zero, and negative powers without relying on the cmath library.
 *
 * @param number The base number (can be integer or floating point).
 * @param power The exponent (must be an integer; can be negative, zero, or positive).
 * @return The result of number raised to the given power.
 *
 * @note For power == 0, the function returns 1.
 *       For power < 0, the function returns the reciprocal of the positive exponentiation.
 *       Does not handle undefined cases like 0 raised to a negative power.
 */

double customPowerFunction(double number, int power)
{
    double y = number;
    int absPower= -1 * power;

    

    if(power == 0)
    {
        y = 1;  //  property of expoents. 
    }
    else if( power < 0)
    {   
        for (int i = 1; i < absPower; i++)
        {
            y *= number; 
        }

        y = 1/y;

    }
    else
    {
        for(int i = 1; i < power; i++)
        {
            y *= number;
        }
    }
    

    return y;


}



int main()
{

    //I assume this will be requiring the use of for loops to use the definition of exponents rather than the pow function in the cmath library 

    double x = 0;
    double y = 0; //not to be confused with the y in customPowerFunction;
    int n;
    cout << "Please provide us a number x to be raised to a power n:" <<endl;
    cout << "x = "; 
    cin >> x; 
    cout << "n = "; 
    cin >> n;

    y = customPowerFunction(x,n);

    cout << x << "^" << n <<" = "<< y << endl; 

    



}