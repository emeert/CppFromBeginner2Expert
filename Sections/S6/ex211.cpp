/*

Exercise 1.

Write a program that asks the user to input an integer number. Then the program calculates
the sum of all even numbers up to the number that the user inputted. Use continue instruction
to leave all odd numbers.

eg.

User inputted:
12

Output:
0 + 2 = 2
2 + 4 = 6
6 + 6 = 12
12 + 8 = 20
20 + 10 = 30
30 + 12 = 42


*/

#include <iostream> 

using namespace std; 

int main() 
{
    int iNumber; 

    cout << "Provide an integer N: "; 
    cin >> iNumber; 

    int result = 0; 

    for(int i = 2; i <= iNumber; ++i)
    {
        if((i % 2) != 0)
            continue;
        
        cout << result << " + " << i << " = " << result+i << endl;       
        result += i; 
       

    }
    return 0; 
}