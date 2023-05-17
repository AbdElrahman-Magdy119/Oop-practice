#include <iostream>

using namespace std;

class abdo
{
private:
    int Age;
    int Salary;
public:

 /*   abdo()
    {

    }   */
    abdo()
    {
        Age=25;
        Salary=9000;
    }
    abdo(int age,int salary)
    {
        Age=age;
        Salary =salary;
    }
    abdo(int age)
    {
        Age=age;
    }

    void dis()
    {
        cout<<Age<<Salary;
    }
    void add( abdo a)
    {
          a.Salary = Salary;
    }
    abdo sum(int age)
    {
        abdo k;

        return k;
    }

};

int main()
{
    abdo o(10,15);
    o.dis();

    return 0;
}
