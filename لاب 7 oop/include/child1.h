#ifndef CHILD1_H
#define CHILD1_H
#include "parent.h"

class child1 : private parent
{
    public:
        int x;
        child1(int x)
        {
            this->x=x;
             publicc=5;
             protectedd=6;

        }


    protected:

    private:
};

#endif // CHILD1_H
