#include <iostream> 

using namespace std; 

/*
    Exercise 5.

    Write a program that asks the user to input an integer number. Then the program should print out
    in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
    every 5 asterisks printed.

    eg.

    User inputted:
    20

    Output:
    *****
    *****
    *****
    *****

*/


int main()
{
    int N; 
    cout << "Provide an integer N: ";
    cin >> N;
    string stars;  

    for(int i=0; i < N; ++i)
    {
        stars += "*";
        if((i+1)%5 == 0)
        {
            stars +="\n";
        } 
    }

    if(N%5 != 0)
    {
        stars +="\n";
    } 
    cout << stars; 
   

    

    return 0; 
}