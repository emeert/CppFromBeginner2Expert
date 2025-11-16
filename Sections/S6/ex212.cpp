/*
    Exercise 2.

    Write a program that shows the user current sum of numbers (starting with 0). Then it asks if
    the user wants to add next number (raising by 1 in an infinite loop). If the user inputs Y or y
    it adds the said number. If the user inputs N or n the number is skipped and gets incremented
    by 1 (continue). If the user inputs anything else then Y/y or N/n the loop closes (break).

    eg.

    Output:
    The current sum is: 0.
    Do you want to add 1 ? 

    User inputted:
    N/n

    Output:
    The current sum is: 0.
    Do you want to add 2 ?

    User inputted:
    Y/y

    Output:
    The current sum is: 2.
    Do you want to add 3 ?

*/

#include <iostream>

using namespace std; 

int main()
{

    int addIndex = 0; 
    int sum = 0;
    char choice; 

    do
    {
        addIndex++;
        cout << "The current sum is " << sum << " would you like to add " << addIndex << "?  enter (Y for yes or N for No.) " << endl;
        cin >> choice;

        if(choice == 'Y'|| choice == 'y')
        {
            sum += addIndex;
        }
        else if(choice == 'n' || choice =='N')
        {
           // skip do nothing ;             
        }
        else if (choice != 'y' && choice != 'Y')
        {
            cout << "invalid input" << endl;
            break;
        }
        

        

    }while(true);


    return 0; 
}