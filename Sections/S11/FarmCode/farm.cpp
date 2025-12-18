#include "farm.h"

#include <iostream>


Animal::Animal()
{
    voice = "default value";

};

Animal::~Animal()
{
    cout << "I am from the base class" << endl;
};


Dog::Dog()
{
    sign = "D";
    voice = "Bow Wow";
};

Dog::~Dog()
{
        cout << "I am from the sub class" << endl;
};

Cat:: Cat()
{
    sign = "C";
    voice = "Meow Meow";
};

Cat:: ~Cat()
{
     cout << "I am from the sub class" << endl;
};

Cow:: Cow()
{

    sign = "Co";
    voice = "Moooooooooooooooooooooooooo!";

};


Cow::~ Cow()
{
    cout << "I am from the sub class" << endl;

};