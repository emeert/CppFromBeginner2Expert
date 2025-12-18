#include <iostream> 
#include "farm.h"
using namespace std; 

void voiceOfAnimal(Animal *);

void voiceOfAnimal(Animal &);


int main ()
{

/*
    //Animal animal; 
    Dog dog; 
    Cat cat;
    Cow cow; 

    //cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;

  //  voiceOfAnimal(&animal);
// ---------------------------------------------
    // POLYMORPHISM EXAMPLE #1:
    // A base-class pointer (Animal*) pointing to a Dog object.
    // Calling getVoice() through the base pointer triggers
    // dynamic dispatch → Dog::getVoice() is called.
    // ---------------------------------------------
    Animal *p = &dog;

   // Dog *p2 = &cat;  wont work 

   cout << p->getVoice() << endl; // wihtout virtual uses getVoice in class Animal not dog so you dont get the sign but you will get the Bow wow which is interesting. 


    // ---------------------------------------------
    // POLYMORPHISM EXAMPLE #2:
    // Passing different derived objects (Cat, Dog, Cow)
    // into a function that accepts an Animal*.
    // The correct getVoice() is chosen at runtime.
   //We create a Polymorphism with this virtual keyword  the class knows which function it may invoke
   voiceOfAnimal(&cat);
   voiceOfAnimal(&dog);
   voiceOfAnimal(&cow);
   
*/ 
    Animal *dog = new Dog;
    delete dog;
    return 0; 
}

void voiceOfAnimal(Animal *p)
{
    
    // ---------------------------------------------
    // POLYMORPHISM EXAMPLE #3:
    // Base pointer calling a virtual function.
    // The actual object type determines which getVoice()
    // implementation runs.
    // ---------------------------------------------

    cout << p ->getVoice() << endl;
}

//just showing you can overload the function voiceOfAnimal
void voiceOfAnimal(Animal &p)
{
    // ---------------------------------------------
    // POLYMORPHISM EXAMPLE #4:
    // Same as above, but using a base reference.
    // Still resolves to the correct derived method.
    // ---------------------------------------------

    cout << p.getVoice() << endl;
}