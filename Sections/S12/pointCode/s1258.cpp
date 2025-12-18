#include <iostream> 
#include "point.h"

using namespace std; 

void operationOnPoints();

 int add()
int main()
{

    //operationOnPoints();

    return 0; 
}

void operationOnPoints()
{
    Point3D p3;
    p3.setXYZ(5,50,1000);
    p3.Point::setX(5);

    cout << p3.getX() << endl;
    cout << p3.getY() << endl;
    cout << p3.getZ() << endl;
}
