#include <iostream>
#include "fraction.h"
using namespace std;

  fraction operator+ (int num , fraction f )
 {
            fraction sum ;
            sum.num2 = f.num2 + num;
            sum.num1 = f.num1 + num;

            return sum;
 }
ostream &operator << (ostream &output,fraction &f)
{
    output<<"the fraction is "<<endl;
    output<< "number1      " << f.num1 <<"     "<< "number2    " <<f.num2;
    return output;
}
istream &operator >> (istream &input,fraction &f)
{
    input >> f.num1 >> f.num2;
    return input;
}


 int fraction::counter = 0;
int main()
{
    fraction f1(3,4);
    fraction f2(5,6);
    fraction f3(7,8);

 //fraction  f4 = f1 + f2 + f3 ;
  //  f4.display();
// fraction f5 = f1 - f2 - f3 ;
   // f5.display();

  //  fraction f6 = f1 * f2 * f3 ;
   // f6.display();

  //  fraction f7 = f1 / f2  / f3 ;
    // f7.display();

     //  fraction f8 = f1 + 5 ;
      //  f8.display();

   //    fraction f9 = ++f1;
   //    f9.display();
     //  fraction f10 = f1++;
      //  f1.display();
      //  f10.display();

   //   fraction f11 = f1++  +  f2++  + f3  ;
    //     f11.display();


       //fraction f12 = --f1;
     //  f12.display();

     // fraction f13 = f1--;
      //  f13.display();
     //   f1.display();

     // fraction f14 = 5 + f1 ;
     // f14.display();

      //  fraction f15 = f1 = f3 ;
      //   f15.display();
     //   f1.display();


     // fraction f16 = fraction::add(f1,f2);
      //  f16.display();


    // cout<< fraction::counter<<endl;

       // fraction f17;
      // f17 = 5;
     //  f17.display();

     /*    fraction  f18;
         int x = (int) f18;  */


     //   cin >> f1;
      //  cout << f1;



    return 0;
}
