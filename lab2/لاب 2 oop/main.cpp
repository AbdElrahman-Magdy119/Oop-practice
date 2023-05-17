#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
    fraction f1(3,0);
    fraction f2(5,4);
    fraction f3 = f3.add(f1,f2);
    f3.display();

    return 0;
}
