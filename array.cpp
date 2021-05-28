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
    array.replace_a_element_(20, 3);
    array.print_without_pass();
}