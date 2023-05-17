#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <iostream>
using namespace std;

class circle : public shape
{
    public:
        circle(int r):shape(r,r)
        {
            dim1=dim2=r;
        }
        int getarea()
        {
            int area = 3.14*dim1*dim1;
            return area;
        }
        void iam()
        {
            cout<<" iam a circle  "<<endl;
        }


    protected:

    private:
};

#endif // CIRCLE_H
