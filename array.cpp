#include<iostream>
#include "input.cpp"

class Array: Utils{
    public:
        Array()
        {
            inputData();
        }
        void print_(int array_r[])
        {
            print_task(array_r);
        }
        void checkTheNumbers()
        {
            inputData();
            print_task(array_);
        }
        int findMax()
        {
            int p = array_[0];
            for(int i =0 ;i<size_;i++)
            {
                if(array_[i]>p)
                {
                    p = array_[i];
                }
            }
            return p;
        }
        int searchaElement(int key_)
        {
            int p = 0;
            for(int i = 0 ;i<size_;i++)
            {
                if(key_ == array_[i])
                {
                    p = array_[i];
                }
            }
            return p;
        }

        int *make_a_copy()
        {
            int *copy_array = new int(size_);
            int i =0;
            while (i<size_)
            {
                copy_array[i] = array_[i];
                i++;
            }
            return copy_array;
        }
        int findMin()
        {
            int p = array_[0];
            for(int i =0 ;i<size_;i++)
            {
                if(array_[i]<p)
                {
                    p = array_[i];
                }
            }
            return p;
        }
        void invertTheArray()
        {
            int array_temp_ [size_];
            for(int i = 0;i<size_;i++)
            {
                array_temp_[i] = array_[((size_-1) - i)];
            }
            print_task(array_temp_);
        }
};

int main()
{
    Array array;
    int *array_copy = array.make_a_copy();
    array.print_(array_copy);
    delete(array_copy);
}