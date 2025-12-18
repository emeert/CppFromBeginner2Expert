#include <iostream> 
using namespace std; 


int main() 
{
    int a[3];
    a[0] =  1; 
    *(a+1) = 2;
    *(a+2) = 3; 

    int *const const_p = &a[0];
    int *p = &a[0];
    cout << a << endl;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;

    cout << endl << endl;

    

    cout << *a << endl;    // a+0 = &a[0];
    cout << *(a+1) << endl; // a+1 = &a[1];
    cout << *(a+2) << endl; // a+2 = &a[2];

    cout << *p++ << endl;    // a+0 = &a[0];
    cout << ++*p << endl; // a+1 = &a[1];
    cout << *++p << endl; // a+2 = &a[2];


    return 0;
}
