#include <iostream>

using namespace std;

class Fraction
{
private:
    int number1;
    int number2;
public:

        int *value;
    Fraction()
    {
        number1=4;
        number2=4;
        value = new int[10];
    }

     Fraction(int number)
    {
        number1 = number;
        value = new int[10];

    }
    Fraction(int num1,int num2)
    {

        number1 = num1;
        number2 = num2;
        value = new int[10];
    }
    void Dispaly()
    {
        cout<<number1<<"/"<<number2<<"\t\t"<<this->value[0]<<endl;

    }
    Fraction Add( Fraction f)
    {

        Fraction s;
        s.number2 = number2 * f.number2;
        s.number1 = (number1 * f.number2)+(number2 * f.number1);
        return s;
    }

    Fraction operator+ (Fraction f)
    {
        Fraction s;
        s.number2 = this->number2 * f.number2;
        s.number1 = (this->number1 * f.number2)+(this->number2 * f.number1);
        return s;

    }

     Fraction operator- (Fraction f)
    {
        Fraction s;
        s.number2 = this->number2 * f.number2;
        s.number1 = (this->number1 * f.number2)-(this->number2 * f.number1);
        return s;

    }
    Fraction operator= (Fraction f)
    {

        this->number1=f.number1;
        this->number2=f.number2;

        this->value =new int[10];

        for(int i=0;i<10;i++)
        {
            this->value[i]=f.value[i];
        }
        return f;

    }
    friend ostream &operator << (ostream &output,Fraction &f);
    friend istream &operator >> (istream &input,Fraction &f);
};

ostream &operator << (ostream &output,Fraction &f)
{
    output<<"the fraction is "<<endl;
    output<< "number1      " << f.number1 <<"     "<< "number2    " <<f.number2;
    return output;
}
istream &operator >> (istream &input,Fraction &f)
{
    input >> f.number1 >> f.number2;
    return input;
}


int main()
{
  /*  Fraction f1(4);
    Fraction f2(4);
    Fraction f3(3,4);
    Fraction f4(6,5);
    Fraction f5 = f3 - f4;
    f3.Dispaly();
    f4.Dispaly();
    f5.Dispaly();
    f5=f4;
    f5.Dispaly();
    f5.value[0]=200;
     f4.Dispaly();
    f5.Dispaly();*/

  /*  Fraction f1(3,3);
    Fraction f2(4,4);
    Fraction f3(5,5);
    f1=f2=f3;
    f1.Dispaly();
    f2.Dispaly();
    f3.Dispaly();*/
    Fraction f1(20,4);
  //  cout << f1;
    cin >> f1;
    cout << f1;


    return 0;
}
