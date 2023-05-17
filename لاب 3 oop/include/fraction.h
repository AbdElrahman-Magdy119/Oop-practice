#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class fraction
{
      private:
           int num1;
           int num2;
           int *v;
    public:
        static int counter;
        fraction(){ counter ++ ;}
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
           v = new int(10);
           counter++;
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
      static  fraction add(fraction f1 , fraction f2)
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
       fraction operator+ (fraction f)
       {
          fraction sum ;
            if(this->num2 == f.num2)
            {
                sum.num2 = this->num2;
                sum.num1 = this->num1 + f.num1;
            }
            else
            {
                sum.num2 = this->num2 * f.num2;
                sum.num1 = (this->num1 * f.num2)+(this->num2 * f.num1);
            }
            return sum;
       }
       fraction operator- (fraction f)
       {
           fraction result ;
            if(this->num2 == f.num2)
            {
                result.num2 = this->num2;
                result.num1 = this->num1 - f.num1;
            }
            else
            {
                result.num2 = this->num2 * f.num2;
                result.num1 = (this->num1 * f.num2)- (this->num2 * f.num1);
            }
            return result;

       }
       fraction operator* (fraction f)
       {
           fraction result ;
            result.num2 = this->num2 * f.num2;
            result.num1 = this->num1 * f.num1;

            return result;
       }
      fraction operator/ (fraction f)
       {
           fraction result ;
            result.num2 = this->num2 / f.num2;
            result.num1 = this->num1 / f.num1;

            return result;
       }
       fraction operator+ (int num)
       {
           fraction sum ;
            sum.num2 = this->num2 + num;
            sum.num1 = this->num1 + num;

            return sum;
       }
       fraction operator++ ()
       {
           this->num1++;
           this->num2++;

            return *this;
       }
          fraction operator++ (int num )
       {
            fraction tmp = *this;
           this->num1++;
           this->num2++;

            return tmp;
       }
           fraction operator-- ()
       {
           this->num1--;
           this->num2--;

            return *this;
       }
          fraction operator-- (int num )
       {
            fraction tmp = *this;
           this->num1--;
           this->num2--;

            return tmp;
       }

       friend   fraction operator+ (int num , fraction f ) ;

       fraction operator= (fraction f)
       {
           this->num1 = f.num1;
           this->num2 = f.num2;
           this->v = new int(10);
           for(int i=0;i<10 ; i++)
           {
               this->v[i]= f.v[i];
           }
           return f;
       }
    void operator= (int num)
       {
            this->num2 = num;
            this->num1 = num;
       }

     operator int ()
       {
           // this->num2 = this->num1;

            return this->num1;
       }

    friend ostream &operator << (ostream &output,fraction &f);//1
    friend istream &operator >> (istream &input,fraction &f);


    protected:


};



#endif // FRACTION_H
