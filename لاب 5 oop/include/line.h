#ifndef LINE_H
#define LINE_H
#include "point.h"
#include "math.h"
class line
{
     point p1;
     point p2;
    public:
        line()
        {
            p1.x=5;
            p1.y=5;
            p2.x=5;
            p2.y=5;
        }
        line(point p1 , point p2)
        {
            this->p1 = p1;
            this->p2 = p2;

        }
        double getlength()
        {
            double len = sqrt(((p1.y-p2.y)*(p1.y-p2.y))+((p1.x-p2.x)*(p1.x-p2.x)));
            return len;
        }

    protected:

    private:
};

#endif // LINE_H
