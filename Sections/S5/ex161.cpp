#include <iostream> 

using namespace std; 


/*

    Exercise 1.

    Write an application that asks the user to input four numbers. The inputted numbers should be stored in a 4 element array of doubles. 
    The numbers should be
    summarized and the result printed in the console as well as the address of first and last element of the array.

    eg.

    User inputted:
    val 1 = 2
    val 2 = 3
    val 3 = 5
    val 4 = 6

    Output:

    Result = 16
    Address of first element = 0x69fed8
    Address of last element = 0x69fef8

*/

int main()
{

  double numbers[4];
  double sum = 0; 

  //input
  for(int i = 0; i < 4; i++)
  {
     cout << "val  " << i+1 << " = ";
     cin >> numbers[i];
     sum += numbers[i];
  }

  //output
  cout << "\nResult = " << sum << endl;
  cout << "Address of the first element = " << &numbers[0] << endl;
  cout << "Address of the last element = " << &numbers[3] << endl;

  return 0;

}