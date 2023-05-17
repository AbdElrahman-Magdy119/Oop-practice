#ifndef LIST_H
#define LIST_H


class list
{
    public:
         int *items;
         int size;
         int current;
        list()
        {
            size=10;
            items = new int (10);
            current=-1;
        }
        list(int size)
        {
            this->size=size;
            items = new int (size);
            current=-1;
        }
        void add(int num)
        {
            if(current == size-1)
            {
                extend();
            }
            current++;
            items[current]=num;
        }

    protected:

    private:
        void extend()
        {
            int *temp = new int (size*2);
            for(int i=0;i<size;i++)
            {
                temp[i]=items[i];
            }
            delete items;
            items=temp;
            size = size*2;

        }
};

#endif // LIST_H
