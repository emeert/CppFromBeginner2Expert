#include <iostream>

using namespace std;

int main()
{

    // int amount; 

    // cout << "How many numebers would you like to store in an array?"<< endl;
    // cin >> amount;

    // int *p = new (nothrow) int [amount];

    // if(p != NULL)
    // {

    //     cout << p << endl;

    //     for (int i = 0; i < amount; i++)
    //     {
    //         cout << "Enter the " << (i+1) << " number: "<< endl;
    //         cin >> p[i];
    //     }

    // }
    // else
    // {
    //     cout << "Not enough memory!" << endl;
    // }


    {

        int *p = new int;  //new allows you to create space after compile 

        cout << p << endl;

        delete p; 

        p = new int;  //new allows you to create space after compile 

        cout << p << endl;

        delete p;


    }


    return 0;
}