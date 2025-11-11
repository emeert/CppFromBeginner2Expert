#include <iostream> 

using namespace std; 

/*
    Exercise 4.

    Write a program that asks the user to input any integer number n. Then calculate the result
    of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial
    as well as the factorial of numbers before n.

    eg.

    User inputted:
    4

    Output:
    1! = 1
    2! = 2
    3! = 6
    4! = 24


*/

int main()
{
    int N; 
    cout << "Input an integer N please";
    cin >> N;
    cout << endl; 

    int factorial = 1; 

    for(int i=1; i <=N; ++i)
    {
        factorial *= i; 
        cout << i << "! = " << factorial << endl;
    }

    return 0; 
}