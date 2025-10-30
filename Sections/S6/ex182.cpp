#include <iostream>

using namespace std; 

/*
    Exercise 2.

    Write a program that prints out in the console all upper case and lower case letters from
    the alphabet (A-Z).

    eg.

    Output:
    A a B b C c D d E e F f G g H h I i J j K k L l M m N n O o P p Q q R r S s T t U u V v W w X x Y y Z z




*/


int main()
{
    char upper,lower; 
    upper = 'A'; 
    lower = upper+32;

    for (int i = 0; i < 26; i++)
    {
        cout << upper <<" "<< lower  <<" ";
        upper++;
        lower++;
    }


    return 0;
}
