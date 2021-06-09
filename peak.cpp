#include <iostream>

int getPeak(int value, int array[], int lower, int higher)
{
    if (higher >= lower)
    {
        int mid = lower + (higher - 1) / 2;

        if (array[mid] == value)
        {
            return mid;
        }
        if (array[mid] > value)
        {
            return getPeak(value, array, lower, mid - 1);
        }
        else
        {
            return getPeak(value, array, mid + 1, higher);
        }
    }
}
int main()
{
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = i;
    }
    std::cout << getPeak(5, array, 0, 19);
}