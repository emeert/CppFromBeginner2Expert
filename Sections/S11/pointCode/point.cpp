#include "point.h"
#include <iostream>
using namespace std; 

Point::Point(int x)
{
    this -> x = x; 
    cout << "The constructor from the Point Class has just been invoked" << endl;

};

Point::~Point()
{
       cout << "The destructor from the Point Class has just been invoked" << endl;
};

void Point::setX(int value)
{
    this -> x = value; 
    cout << "Im from Point" << endl;
};

Point2D::Point2D(int x, int y): Point(x)
{
    this->y = y;
    cout << "The constructor from the Point2D Class has just been invoked" << endl;
};

Point2D::~Point2D()
{
    cout << "The destructor from the Point2D Class has just been invoked" << endl;
};


void Point2D::setY(int value)
{
    this -> y = value; 
};

void Point2D::setXY(int x, int y)
{
    setX(x);
    setY(y);
};

void Point2D::setX(int x)
{
    this -> x = x; 
    cout << "Im from Point2D" << endl;
};



Point3D::Point3D(int x, int y, int z) : Point2D(x,y)
{
    this -> z = z; 
      cout << "The constructor from the Point3D Class has just been invoked" << endl;
};

Point3D::~Point3D()
{
    cout << "The destructor from the Point3D Class has just been invoked" << endl;
};

void Point3D::setZ(int z)
{
    this-> z = z;
    cout << "Im from Point3D" << endl;
};

void Point3D::setXYZ(int x, int y, int z)
{
    setX(x);
    setY(y);
    setZ(z);
};
