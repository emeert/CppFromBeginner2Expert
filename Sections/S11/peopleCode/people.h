#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

#include <iostream>
using namespace std;

class personalData
{
   private:
    short age;
    string name;
    int *p;
   public:
    personalData();
     personalData(short);
    ~personalData();
    /*
        This function is setting Age if age is lower than 0 then age = 10
    */
    void setAge (int age);
    short getAge (){return age;  } //leave inlines here instead of putting them in the people.cpp
    void setName(string name);
    string getName(){return name;}
};

#endif //PEOPLE_H_INCLUDED