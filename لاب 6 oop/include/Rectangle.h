#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <iostream>
using namespace std;

class Rectangle : public shape
{
    public:
        Rectangle(int dim1, int dim2): shape(dim1,dim2)
        {
            this->dim1=dim1;
            this->dim2=dim2;
        }
        int getarea()
        {
            int area= dim1 * dim2 ;
            return area;
        }
        void iam()
        {
            cout<<" iam rectangle  "<<endl;
        }

    protected:

    private:
};

#endif // RECTANGLE_H
