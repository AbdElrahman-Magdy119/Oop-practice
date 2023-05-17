#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class shape
{
    public:
        int dim1;
        int dim2;
        shape(int dim1, int dim2)
        {
            this->dim1=dim1;
            this->dim2=dim2;
        }
       virtual int getarea()=0;
       virtual  void iam()=0;


    protected:

    private:
};

#endif // SHAPE_H
