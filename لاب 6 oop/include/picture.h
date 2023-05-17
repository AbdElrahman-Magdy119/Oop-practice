#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
using namespace std;
#include "shape.h"

class picture
{
    public:
         shape *shap[4];
         int current ;
        picture()
        {
            for(int i=0;i<4;i++)
            {
                shap[i]=NULL;
            }
            current = -1;
        }
        void addshape(shape * s)
        {
            current++;
            shap[current]=s;
        }
        void display()
        {
            for(int i=0;i<4;i++)
                {
                    shap[i]->iam();
                }
        }


    protected:

    private:
};

#endif // PICTURE_H
