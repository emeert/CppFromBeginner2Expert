#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class position
{   
    int x;
    int y;

    public:
        position(int, int);
        ~position();
        void getPosition() const;
        void setPosition(int, int);
        friend void setX(position &, int);


};


#endif  //POSITION_H_INCLUDED