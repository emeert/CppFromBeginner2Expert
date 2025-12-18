#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED

#include <iostream>

using namespace std; 


// Animal is an abstract base class.
// It defines a common interface (getVoice) but cannot be instantiated.
// Only derived classes that implement getVoice() can be created.
class Animal
{
    protected:
        string voice;
    public: 
        Animal();
        virtual  ~Animal();
        virtual string getVoice() = 0; 

};

class Dog: public Animal
{
        string sign;
    public: 
        Dog(); 
        ~Dog(); 
        string getVoice() {    return voice + " " + sign;    };

};

class Cat: public Animal
{
        string sign;
    public: 
        Cat();
        ~Cat();
        string getVoice() {    return voice + " " + sign;    };


};

class Cow: public Animal
{
        string sign;
    public: 
        Cow();
        ~Cow();
        string getVoice() {    return voice + " " + sign;    };


};





#endif //FARM_H_INLCUDED