#include <iostream>

int getPeak(int array[], int lower, int higher)
{
    if (higher >= lower)
    {
        int mid = lower + (higher - 1) / 2;
        if (array[mid] < array[mid - 1])
        {
            return getPeak(array, lower, mid - 1);
        }
        else if(array[mid] < array[mid + 1])
        {
            return getPeak(array, mid + 1, higher);
        }else{
            return mid;
        }
    }
}
int main()
{
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        int k = rand();
                array[i] =k ;
    }
    for (int i = 0; i < 20; i++)
    {
        std::cout<<array[i]<<"\t";
    }

    std::cout<<"\n" << getPeak(array, 0, 20);
}