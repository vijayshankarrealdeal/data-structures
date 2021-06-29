#include<iostream>

int main()
{
    int array[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;j <5; j++)
        {
            array[i][j] = rand();
        }
    }
    for (int i = 0;i<5;i++)
    {
        for (int ij = 0; ij < 5; ij++)
        {
            std::cout<<array[i][ij];
        }
        std::cout<<"\n";
    }
    
    
}