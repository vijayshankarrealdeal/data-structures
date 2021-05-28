#include<iostream>

class Utils{

    public:
        int array_[10];
        int size_ = sizeof(array_)/sizeof(*array_);
        void inputData(){
            for (int i =0 ;i<size_;i++)
            {
                array_[i] = i;
            }
        }
        void print_task(int array_T[])
        {
            for (int i = 0;i<size_;i++)
            {
                std::cout<<array_T[i]<<"\t";
            }
            std::cout<<"\n";
        }
};