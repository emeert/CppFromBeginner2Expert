
/*
    Author: Elijah Meert
    File: ex142.cpp
    Description: An application that asks the user to input the points he achieved on an exam. 
        If the number of points was higher than 50 the user should be notified that he/she passed
        the exam - use the conditional operator. The number of points which a student was able to
        achieve from the exam was from 0 - 100 hence, if the user inputs a number which doesn't
        belong to this interval the output should be an error message.
    Purpose:  Demonstrate Conditional Operators 
    Bonus: I flexed my knowledge of functions. 
*/

#include <iostream> 

using namespace std; 


/*
    Exercise 2.

        Write an application that asks the user to input the points he achieved on an exam. 
        If the number of points was higher than 50 the user should be notified that he/she passed
        the exam - use the conditional operator. The number of points which a student was able to
        achieve from the exam was from 0 - 100 hence, if the user inputs a number which doesn't
        belong to this interval the output should be an error message.

        eg.

        User inputted:
        30

        Output:
        You didn't pass the exam !

        eg.

        User inputted:
        101

        Output:
        ERROR. The number of points is invalid ! 
*/

/**
 * @brief Validates whether the exam score is within the acceptable range.
 * 
 * @param score The score to validate (expected range: 0–100).
 * @return int Returns 1 if the score is valid, 0 otherwise.
 */

int examScoreValidation(int score)
{
    int scoreValid = 0; 
    // Check is the score is valid if it is then return 1 otherwise return 0. 
    (score >= 0 && score <= 100) ? scoreValid = 1  : scoreValid = 0;

    //return if score is valid. 
    return scoreValid;
}

/**
 * @brief Generates feedback based on the user's exam score.
 * 
 * @param score The score achieved by the user (expected range: 0–100).
 * @return std::string A message indicating whether the user passed or if the score is invalid.
 */

string examFeedback(int score)
{
    string feedback;
    feedback = (examScoreValidation(score) == 1) ? ((score > 50) ? "You passed the exam !" : "You didn't pass the exam !")
    : "The number of points is invalid !"; 
    return feedback;
}

int main()
{

    
    int examScore = 0; 
    string response;   
    
    // Prompt the user to enter their exam score
    cout << "What score did you get on your exam? ";    
    cin >> examScore;       
    response = examFeedback(examScore);         
    cout << response <<  endl;     
}