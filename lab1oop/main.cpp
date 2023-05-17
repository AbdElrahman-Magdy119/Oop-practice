#include <iostream>

using namespace std;
int counter=0;

struct Employee
{
    int ID;
    char Name[20] ;
     int Salary;
     void display( int i)
     {
         cout << "the id  of("<<i+1<<") is   "<<ID<<"           ";
         cout << "the  name  of("<<i+1<<") is   "<<Name<<"           ";
         cout << "the salary  of("<<i+1<<") is   "<<Salary<<"           ";
         cout<<endl;
     }
     void enterdata( int i)
     {
        cout << "enter id for " <<i+1<<"   ";
        cin>>ID;
        cout << "enter name for " <<i+1<<"   ";
        cin>>Name;
        cout << "enter salary for " <<i+1<<"   ";
        cin>>Salary;
     }
};
int mul (int x,int y,int count)
{
    int result=0;
     for(int i=0;i<count;i++)
       {
          result= result+x*y;
       }

    return result;
}
int mul(int x,int y)
{
    int result = x*y;
    return result;
}
int add (int x=10,int y=12)
{
    int sum = x+y;
    return sum;
}
int add1 (int x,int y=12)
{
    int sum = x+y;
    return sum;
}
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}

int main()
{

  /* Employee *e = new Employee[5];

    for(int i=0;i<3;i++)
    {
        e[i].enterdata(i);
    }
    for(int i=0;i<3;i++)
    {
         e[i].display(i);
    }

*/
          int x=10;
          int y=12;
          int &k =x;
          x=1;
          k=y;


          cout<<x<<endl<<y<<endl<<k<<endl;
    /*  int x=10,y=30;
      swap(x,y);
      cout<<x<<endl<<y<<endl;*/


     // int result1=   mul(3,5,2);
   //   int result2=   mul(3,5);
    //  int result3=  add(20);
   //   int result4=  add1(10);
       //    cout << "result1" << "     "<< result1<< endl;
       //    cout << "result2" << "     "<< result2<< endl;
      //     cout << "result3" << "     "<< result3<< endl;
        //   cout << "result4" << "     "<< result4<< endl;

      int counter =10;
      cout << "global" << "     "<< ::counter<< endl;
      cout << "local" << "     "<< counter<< endl;

    return 0;
}
