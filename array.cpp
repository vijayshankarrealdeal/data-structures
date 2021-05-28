#include <iostream>
#include "input.cpp"

class Array : Utils
{
public:
    Array()
    {
        inputData();
    }
    void print_with_pass(int array_r[])
    {
        print_task(array_r);
    }
    void print_without_pass()
    {
        for (int i = 0; i < size_; i++)
        {
            std::cout << array_[i] << "\t";
        }
        std::cout << "\n";
    }

    void checkTheNumbers()
    {
        inputData();
        print_task(array_);
    }
    int findMax()
    {
        int p = array_[0];
        for (int i = 0; i < size_; i++)
        {
            if (array_[i] > p)
            {
                p = array_[i];
            }
        }
        return p;
    }
    void replace_a_element_(int key_, int replace_)
    {
        for (int i = 0; i < size_; i++)
        {
            if (replace_ == array_[i])
            {
                array_[i] = key_;
                break;
            }
        }
    }
    int * delete_element(int pos)
    {
         for(int i=pos-1; i<size_-1; i++)
        {
            array_[i] = array_[i + 1];
        }

        /* Decrement array size by 1 */
        size_--;
        return array_;
    }
    int searchaElement(int key_)
    {
        int p = 0;
        for (int i = 0; i < size_; i++)
        {
            if (key_ == array_[i])
            {
                p = array_[i];
            }
        }
        return p;
    }
    int *insert_element_(int key_, int after_)
    {
        int *provide_ = new int(size_ + 1);
        int i = 0;
        int j = 0;
        while (i < size_ + 1)
        {
            provide_[i] = array_[j];
            if (array_[j] == after_)
            {
                int temp_ = after_;
                provide_[i] = key_;
                provide_[i + 1] = temp_;
                i++;
            }
            j++;
            i++;
        }
        return provide_;
    }

    int *make_a_copy()
    {
        int *copy_array = new int(size_);
        int i = 0;
        while (i < size_)
        {
            copy_array[i] = array_[i];
            i++;
        }
        return copy_array;
    }
    int findMin()
    {
        int p = array_[0];
        for (int i = 0; i < size_; i++)
        {
            if (array_[i] < p)
            {
                p = array_[i];
            }
        }
        return p;
    }
    void invertTheArray()
    {
        int array_temp_[size_];
        for (int i = 0; i < size_; i++)
        {
            array_temp_[i] = array_[((size_ - 1) - i)];
        }
        print_task(array_temp_);
    }
};

int main()
{
    Array array;
    int *x = array.delete_element(4);
    for ( int i =0 ;i<9;i++)
    {
        std::cout<<x[i]<<"\t";
    }
}