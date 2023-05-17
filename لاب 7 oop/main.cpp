#include <iostream>
#include "child1.h"
#include "child2.h"
#include "Derived.h"
int power(int x,int y)
{
    int z;
    if(y == 0)
        return 1;
    else
    {
         y--;
        z=power(x,y)*x;

    }
    return z;
}

using namespace std;

int main()
{
    Derived d;

   int z=power(10,3);
    cout <<z<< endl;
    return 0;
}
