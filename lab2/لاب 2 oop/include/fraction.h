#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class fraction
{
      private:
           int num1;
           int num2;
    public:
        fraction(){}
        fraction(int nu1,int nu2)
        {
           if(nu2 == 0)
           {
               this->num1 = nu1;
               this->num2 = 1;
           }
           else
           {
             setnum1(nu1);
             setnum2(nu2);
           }
        }
        void setnum1(int num)
        {
          this->num1 = num;

        }
        void setnum2(int num)
        {
          this->num2 = num;
        }
        int getnum1()
        {
            return this->num1;
        }
         int getnum2()
        {
            return this->num2;
        }
        fraction add(fraction f1 , fraction f2)
        {
            fraction sum ;
            if(f1.num2 == f2.num2)
            {
                sum.num2 = f1.num2;
                sum.num1 = f1.num1 + f2.num1;
            }
            else
            {
                sum.num2 = f1.num2 * f2.num2;
                sum.num1 = (f1.num1 * f2.num2)+(f1.num2 * f2.num1);
            }
            return sum;
        }
        void display()
        {
            cout<<" fraction is  "<<this->num1<<"    /   "<<this->num2<<endl  ;
        }


    protected:


};

#endif // FRACTION_H
