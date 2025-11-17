/*
        Exercise 7.

        Write a program that asks the user to input 5 floating point numbers (stored in a 5 element
        array of doubles). Write two functions "minValue" and "maxValue" that take into argument 
        an array of doubles and returns a double. "minValue" should return the minimum value of the array
        and "maxValue" should return the maximum value of the array.

        eg.

        User inputted:
        3
        2.31
        2.32
        17
        19

        Output:
        The minimum value was: 2.31 - minValue(array)
        The maximum value was:   19 - maxValue(array)

*/

#include <iostream> 

using namespace std; 

double minVal (double arr[5])
{
        double temp = arr[0];
        for (int i = 1; i < 5; i++ )
        {
                
                if(arr[i] <= temp)
                {
                        temp = arr[i];
                }

        }

        return temp;
}

double maxVal (double arr[5])
{
        double temp = arr[0];
        for (int i = 1; i < 5; i++ )
        {
                
                if(arr[i] >= temp)
                {
                        temp = arr[i];
                }

        }

        return temp;
}


int main()
{
        double arr[5]; 
        cout << "Input 5 floating point numbers: " << endl;
        cout << "1. :";
        cin >> arr[0];
        cout << endl;
        cout << "2. :";
        cin >> arr[1];
        cout << endl;
        cout << "3. :";
        cin >> arr[2];
        cout << endl;
        cout << "4. :";
        cin >> arr[3];
        cout << endl;
        cout << "5. :";
        cin >> arr[4];
        cout << endl;

        cout << "The numbers entered are : "<< endl;
        for(int i = 0; i < 5 ; i++)
        {
                cout << arr[i] << endl;
        }
        cout << "The minimum number is " << endl;

        cout << minVal(arr) << endl;

        cout << "The maximum number is" << endl;
        cout << maxVal(arr) << endl;

        return 0; 
}

