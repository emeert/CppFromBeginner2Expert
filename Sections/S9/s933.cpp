#include <iostream> 
using namespace std; 

/* Pointers are ordinary variables that can store adress of varaibles*/
int main()
{
    int var = 5; 
    int a = 70;

    cout << *&var << endl;

    int *p; 
    p = &var; 

    cout << *p << endl;

    *p = 20; 

    cout << *p << endl;
    cout << *&var << endl;

    var = 60;

    cout << *p << endl;
    cout << *&var << endl;

    p = &a;

    cout << *p << endl;


    int const *const_p = &a; // This is a pointer that has to be initialized when defined beecause it cannot change its address assigned to it. 

    const int *p_2 = &a; // This is a pointer that can't change its value under that adress but you can change the adress. 

    const int * const p_3 = &a; // this combines both a pointer that can't change its adress or value. 

    cout << endl << endl << endl;

    int ordinary_var = 10; 

    int *orginary_p = &ordinary_var; 

    cout << "ordinary_var: " << ordinary_var << endl; // outputs the value of the ordinary variable 
    cout << "ordinary_p: " << orginary_p << endl; // outputs adres of the variable the pointer is pointing to. 
    cout << "*ordinary_p: " << *orginary_p << endl; // outputs the value of the variable the pointer is pointing to
    cout << "&ordinary_p: " << &orginary_p << endl; //outputs address of pointer itself 

    int ** p_pointing_to_adress_of_pointer = &orginary_p;

    cout << "&p_pointing_to_adress_of_pointer: " << p_pointing_to_adress_of_pointer << endl; //outputs address of pointer itself 


    return 0;
}