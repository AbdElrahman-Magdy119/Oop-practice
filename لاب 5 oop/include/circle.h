#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class circle : public shape
{
    public:
        circle()
        {
            dim1=dim2=5;
        }
        circle( int r):shape(r,r)
        {
            dim1=dim2=r;
        }
        int getarea()
        {
            int area = 3.14*dim1*dim1;
            return area;
        }

    protected:

    private:
};

#endif // CIRCLE_H
