#ifndef DERIVED_H
#define DERIVED_H
#include "child1.h"
#include "child2.h"

class Derived : public child1,child2
{
    public:
        Derived() : child2(6),child1(10)
        {
           x=y=15;

        }

    protected:

    private:
};

#endif // DERIVED_H
