#include <iostream> 
#include "integer.h"

using namespace std; 


int main()
{

    Integer a(50);
    
    int b = (int) a;

    a = 100; 

    a+=b; 

    
    cout << a.getNr() << endl;

    return 0; 
}