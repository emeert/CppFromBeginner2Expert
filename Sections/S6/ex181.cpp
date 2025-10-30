#include <iostream> 
using namespace std; 


/*

    Exercise 1.

    Write a program that asks the user to input an integer number. Then starting from that
    number the program prints out in the console next 100 numbers.

    eg.

    User inputted:
    11

    Output:
    12
    13
    14
    15
    ...
    ...
    111


*/
int main()
{
    int startNumber; 
    int count; 

    cout << "Provide us a number please? ";
    cin >> startNumber; 
    //We preserve the starting number and store it in count which will mutate with the interation of the for loop.
    count = startNumber; 

    //Count the next 100 digits after the starting number. 
    for (int i = 0 ; i < 100; i++)
    {
        count += 1;
        cout << count << endl;
    }
    
    return 0;

}