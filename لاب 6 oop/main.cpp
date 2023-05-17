#include <iostream>
#include "Rectangle.h"
#include "circle.h"
#include "shape.h"
#include "picture.h"
using namespace std;

int main()
{
    Rectangle r(10,20);
    circle c(5);
    cout<<"area of rectangle   " <<r.getarea()<<endl;
    cout<<"area of circle   " <<c.getarea()<<endl;

     picture p;
     p.addshape(new circle(5));
     p.addshape(new Rectangle(5,5));
     p.addshape(new circle(5));
     p.addshape(new Rectangle(5,5));

     p.display();

    return 0;
}
