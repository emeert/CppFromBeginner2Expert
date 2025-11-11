#include <iostream>
using namespace std;

/*
    Exercise 1.

    Write a program that asks the user to input a PIN code for the first time. Then using
    the while (or do while) loop ask the user to input the PIN code again. If the PIN code is 
    wrong, the user should input it again (until the number is correct).
*/

int main() {
    int creditOrDebit;
    int debitPin;
    int pin2Match = 1234;
    int pinAttemptFails = 0;

    cout << "Total  $123.55" << endl;
    cout << "Please Swipe Credit/Debit Card" << endl;
    cout << "Card Swipe Accepted" << endl;
    cout << "ATM DEBIT OR CREDIT" << endl;
    cout << "1. CREDIT" << endl;
    cout << "2. DEBIT" << endl;
    cin >> creditOrDebit;

    enum { credit = 1, debit };

    switch (creditOrDebit) {
        case credit:
            cout << "Payment Accepted" << endl;
            cout << "Your account will be charged $123.54" << endl;
            cout << "Please be aware that credit card charges take 3–5 business days to post to your account!" << endl;
            cout << "Have a nice day" << endl;
            break;

        case debit:
            do {
                cout << "Please Enter your 4-digit PIN: ";
                cin >> debitPin;

                if (debitPin != pin2Match) {
                    cout << "Invalid PIN entered." << endl;
                    cout << "Please be advised." << endl;
                    cout << "You have " << 2 - pinAttemptFails << " attempt(s) left." << endl;
                    pinAttemptFails++;
                } else {
                    break;
                }
            } while (pinAttemptFails != 3);

            if (debitPin == pin2Match) {
                cout << "Payment Accepted" << endl;
                cout << "Your account will be debited $123.54" << endl;
                cout << "Have a nice day" << endl;
            } else {
                cout << "Card declined!" << endl;
                cout << "Please use a different payment method." << endl;
            }
            break;

        default:
            cout << "Invalid selection. Please restart and choose 1 for CREDIT or 2 for DEBIT." << endl;
            break;
    }

    return 0;
}