#include "position.h"

#include <iostream>

using namespace std;


position::position(int x, int y)
{
    this -> x = x; 
    this -> y = y;

}

position::~position()
{
 



}

void position::getPosition() const
{
    cout << "x :" << x << endl;
    cout << "y :" << y << endl;
}

void position::setPosition(int x, int y)
{
    this -> x = x; 
    this -> y = y;

}