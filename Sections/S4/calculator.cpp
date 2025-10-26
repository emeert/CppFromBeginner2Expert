/**
 * @file calculator.cpp
 * @brief Simple command-line calculator program.
 * 
 * @author Elijah Meert
 * @date October 26, 2025
 * 
 * @version 1.0
 * @copyright All rights reserved
 * 
 * This program performs basic arithmetic operations (+, -, *, /)
 * between two user-input numbers. It includes session control
 * and input validation for division by zero.
 */




#include <iostream> 
using namespace std; 


/**
 * @brief Displays the welcome banner for the calculator program.
 */
void welcomeMessage()
{
    cout<<"------------------------------"<<endl;
    cout<<"|   Calculator v.1.0       |"<<endl;
    cout<<"|    by Elijah Meert       |"<<endl;
    cout<<"|   All rights reserved    |"<<endl;
    cout<<"------------------------------"<<endl;

}


/**
 * @brief Prompts the user to input a number.
 * 
 * @param n Indicates whether it's the first (1) or second (2) number.
 * @return double The number entered by the user.
 */

double inputPrompt(int n)
{
    double number; 

    if(n == 1)
    {
        cout << "Enter the 1st number:" << endl;
    }
    else if (n == 2)
    {
         cout << "Enter the 2nd number:" << endl;
    }
    
    cin >> number;

    return number; 
}

/**
 * @brief Multiplies two numbers.
 * 
 * @param number_1 First operand.
 * @param number_2 Second operand.
 * @return double The product of the two numbers.
 */
double multiplication(double number_1, double number_2)
{
    double result; 
    result = number_1 * number_2; 
    return result; 
}

/**
 * @brief Adds two numbers.
 * 
 * @param number_1 First operand.
 * @param number_2 Second operand.
 * @return double The sum of the two numbers.
 */
double addition(double number_1, double number_2)
{
    double result; 
    result = number_1 + number_2; 
    return result; 
}

/**
 * @brief Divides the first number by the second.
 * 
 * @param number_1 Numerator.
 * @param number_2 Denominator.
 * @return double The result of division.
 */
double subtraction (double number_1, double number_2)
{
    double result; 
    result = number_1 - number_2; 
    return result; 
}


/**
 * @brief Divides the first number by the second.
 * 
 * @param number_1 Numerator.
 * @param number_2 Denominator.
 * @return double The result of division.
 */
double division(double number_1, double number_2)
{
    double result; 
    result = number_1 / number_2; 
    return result; 
}

/**
 * @brief Prompts the user to choose an arithmetic operation and displays the result.
 * 
 * @param number_1 First operand.
 * @param number_2 Second operand.
 */
void calculatorPrompt(double number_1, double number_2)
{
    char operation; 

    cout << "What do you want to do with the numbers given:" << endl;
    cout << " + - add:" << endl;
    cout << " - - subtract:" << endl;
    cout << " * - multiply:" << endl;
    cout << " / - divide:" << endl;

    cin >> operation;
    
    // Print 5 blank lines above
    for (int i = 0; i < 5; ++i)
    {
        cout << endl;
    }

    switch(operation)
    {

        case '+':
        {
            cout << number_1 << "+" << number_2 << "= " << addition(number_1,number_2) << endl;
        }
            
        break;

        case '-':
        {
            cout << number_1 << "-" << number_2 << "= " << subtraction(number_1,number_2) << endl;
        }
        break;

        case '*':
        {
            cout << number_1 << "*" << number_2 << "= " << multiplication(number_1,number_2) << endl;
        }
        break;

        case '/':
        {
            if(number_2 == 0.0)
            {
   

                cout << "Error: Division by zero is undefined." << endl;


            }
            else
            {
                cout << number_1 << "/" << number_2 << "= " << division(number_1,number_2) << endl;
            }

        }
        break;

    }

    
    // Print 5 blank lines below
    for (int i = 0; i < 5; ++i)
    {
        cout << endl;
    }
}


/**
 * @brief Asks the user whether to continue the calculator session.
 * 
 * @return int 1 to continue, 0 to exit.
 */


int sesssionPrompt()
{
    int  response; 
    cout << "Would you like to calculate again?" << endl; 
        cout << "Enter 1 or 0" << endl;
        cout << "1 = Yes" << endl;
        cout << "0 = No" << endl; 

    cin >> response; 
    int sessionContinue; 
    
    if( response == 1 )
    {
        sessionContinue = 1;         
    }
    else
    {
        sessionContinue = 0; 
    }

    return sessionContinue;
}


/**
 * @brief Main entry point of the calculator program.
 * 
 * Initializes session loop and handles user interaction.
 * 
 * @return int Exit status.
 */

int main()
{

    double x1,x2;

    welcomeMessage();

    int session = 1;

    while(session)
    {
        x1 = inputPrompt(1);
        x2 = inputPrompt(2);

        calculatorPrompt(x1,x2);

        session = sesssionPrompt();
    }
}