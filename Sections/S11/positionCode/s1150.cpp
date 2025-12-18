#include <iostream> 

#include "position.h"

void setX(position &, int);

int main()
{   
    position dog(10,15);
    dog.getPosition();
    setX(dog,500);
    dog.getPosition();
    dog.setPosition(50,100);
    dog.getPosition();

   const position house(100,200);

    house.getPosition();
 

    return 0;
}

void setX(position & obj, int val)
{
    obj.x = val;
}