#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED


class Point //base, parent, superclass,
{
    protected:
        int x; 
    public: 

        Point(int  =0);
        ~Point();
        int getX() { return x;}
        void setX(int );

};

class Point2D : public Point //derived, child, subclass 
{
    protected: 
        int y;
    public: 
        Point2D(int =0, int =0);
        ~Point2D();
        int getY() { return y;}
        void setY(int );
        void setXY(int x, int y);
         void setX(int );

        

};


class Point3D : public Point2D //derived, child, subclass 
{
    protected: 
        int z;
    public: 
        Point3D(int =0, int =0,int =0);
        ~Point3D();
        int getZ() { return z;}
        void setZ(int );
        void setXYZ(int x, int y, int z);
    
};

/*
     class Point2D : public Point 
     everything what is inside Point2D (excluding constructor and destructor) will be in Point2D
     private - CANNOT ACCESS 
     protected - protected 
     public - public
*/

#endif //POINT_H_INCLUDED 