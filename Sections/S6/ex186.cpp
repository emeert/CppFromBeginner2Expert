#include <iostream>
using namespace std; 


    /*
    Exercise 6.

    Write a program that asks the user to input 5 integer numbers (store them in a 5 element array).
    Then it checks if the inputted numbers were odd or even and prints that information out in the console.

    eg.

    User inputted:
    1
    2
    3
    4
    5

    Output:
    The number 1 is odd.
    The number 2 is even.
    The number 3 is odd.
    The number 4 is even.
    The number 5 is odd.

    */

int main()
{
    int number[5];

    cout << "Enter 5 numbers. Each will be stored in an array and checked for odd/even status.\n\n";

    for(int i = 0; i<5; i++)
    {
        cout << "Enter element #" << (i + 1) << ": ";
        cin >> number[i];
    }

    for(int i = 0; i < 5 ; i++)
    {
        if(number[i] % 2 == 0)
        {
            cout << "The number " << number[i] << " is even." << endl;
        }
        else
        {
            cout << "The number " << number[i] << " is odd." << endl;
        }
    }

}