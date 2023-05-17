#include <iostream>
#include "point.h"
#include "line.h"
#include "Recatngle.h"
#include "shape.h"
#include "circle.h"
using namespace std;

int main()
{
   /* point p1(10,20);
    point p2(30,40);
    line l(p1,p2);
    double len = l.getlength();
   cout<<len<<endl;*/

    circle c(5);
    cout<<" circle area  =   "<<c.getarea()<<endl;
    Recatngle r(5,6);
    cout<<" Recatngle area  =   "<<r.getarea()<<endl;




    return 0;
}
