#include <iostream>
#include "people.h"
using namespace std; 



void test()
{
    personalData *pointer = new personalData[5];

    delete [] pointer;

}

/* classes */
int main()
{

    personalData person(10); 
    personalData person2(50);   
    
    person.setAge(-50);
    // person2.setAge(27);

    // person.setName("Bartholemew");

    cout << person.getAge() << endl;
    // cout << person.getName() << endl;
    // cout << person2.getAge() << endl;

    test();


    return 0; 
}