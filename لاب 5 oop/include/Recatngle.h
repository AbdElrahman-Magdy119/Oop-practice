#ifndef RECATNGLE_H
#define RECATNGLE_H
#include "shape.h"

class Recatngle : public shape
{
    public:
        Recatngle()
        {
            dim1=5;
            dim2=5;
        }
        Recatngle(int dim1 , int dim2):shape(dim1,dim2)
        {
            this->dim1=dim1;
            this->dim2=dim2;
        }
        int getarea()
        {
            int area = dim1*dim2;
            return area;
        }

    protected:

    private:
};

#endif // RECATNGLE_H
