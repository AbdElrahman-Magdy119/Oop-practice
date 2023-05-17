#ifndef SHAPE_H
#define SHAPE_H


class shape
{
    public:
        int dim1;
        int dim2;
        shape()
        {
          dim1=0;
          dim2=0;
        }
         shape(int dim1 , int dim2)
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

#endif // SHAPE_H
