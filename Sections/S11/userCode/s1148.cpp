#include <iostream> 
#include "user.h"

using namespace std;



int main()
{

    User a; 
    User b;
    User a1[50];

    cout << a.getID() <<endl;
    cout << b.getID() <<endl;
    
    cout << a1[9].getID() <<endl;

    cout << a1[9].getID() <<endl;

    cout << User::getCounter() <<endl;

    return 0;
}