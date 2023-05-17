#include <iostream>
#include "list.h"
using namespace std;

int main()
{

     list<int>l;
      l.add(4);
      l.add(5);
      l.add(6);
      l.add(7);
      l.add(8);

  /*    try        //    getlast()
      {
         int x = l.getlast();
         cout<<x<<endl;
      }
      catch(const char* msg)
      {
          cout<<msg<<endl;
      }  */


  /*    try         // getbyindex()
      {
          int x = l.getbyindex(100);
          cout<<x<<endl;
      }
      catch( int e)
      {
          if( e == 0)
            cout << "this index out of length"<<endl;
      }  */


   //  l.display();


      try        //Remove()
      {
         int x = l.Remove1(10);
        cout<<x<<endl;


      }
      catch(const char* msg)
      {
          cout<<msg<<endl;
      }



        l.display();




    return 0;
}
