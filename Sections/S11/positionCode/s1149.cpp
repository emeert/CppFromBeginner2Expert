#include <iostream> 

#include "position.h"

int main()
{   
    position dog(10,15);
    dog.getPosition();
    dog.setPosition(50,100);
    dog.getPosition();

   const position house(100,200);

    house.getPosition();
 

    return 0;
}