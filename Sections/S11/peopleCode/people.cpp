
#include <iostream>
#include "people.h"


void personalData::setAge(int age)
{
        if(age > 0) this -> age = age; 
}


void personalData::setName(string name)
{
    this -> name = name;
}

personalData::personalData()
{
    static int i = 0;   
    cout << "This constructor has been just invoked " << ++i << endl;
    age = 10;
    name = "DumbAss";
    p = new int[5];
}


personalData::personalData(short age)
{
    cout << "This is a different constructor" << endl;
    this -> age = age;
}

personalData::~personalData()
{
    static int j = 0;   
    cout << "This Deconstructor has been just invoked " << ++j << endl;

    delete [] p;
}