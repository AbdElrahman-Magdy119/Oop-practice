#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

template <class T>
class list
{
    int length;
    T *arr;
    int size;


    public:

        list()
        {
            size=10;
            arr = new T[size];
            length=-1;
        }
        list(int size)
        {
            this->size=size;
            arr = new T[size];
            length=-1;
        }
        void add( T item)
        {
            if(length == size-1)
            {
                extend();
            }
            length++;
            arr[length]=item;
        }
        void extend()
        {
            T *temp = new T[size*2];
            for(int i=0;i<size;i++)
            {
                temp[i]=arr[i];
            }
            size = size*2;
            delete arr;
            arr = temp;
        }
        T getlast()
        {
            if(length == -1)
                throw "list is empty";
            else
                return arr[length];
        }
        T getbyindex(int index)
        {
            if( index > length)
                throw 0;
            else
                return arr[index];
        }
        void display()
        {
            for(int i=0;i<=length;i++)
            {
                cout << arr[i] << "         " ;
            }
        }

        T Remove1(int index)
        {
            if( index > length)
                throw "this index out of length";
             else
             {


                 T temp=arr[index];
                 for(int i=index;i<length;i++)
                 {
                     arr[i]=arr[i+1];
                 }
                length--;
                return temp;

             }
        }




    protected:

    private:
};

#endif // LIST_H
