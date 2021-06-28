//Array impl
#include <iostream>
#include <cmath>
class ArrayTree
{
public:
    int arr[200];
    ArrayTree()
    {
        for (int i = 0; i < 200; i++)
        {
            arr[i] = -1;
        }
    }

    void insert(int value, int i)
    {
        arr[i] = value;
    }
    void getParentLeftAndRight(int value)
    {
        int index = -1;
        for (int i = 0; i < 15; i++)
        {
            if (arr[i] == value)
            {
                index = i;
            }
        }
        std::cout << "Left Child\t" << arr[(2 * index) + 1] << "\n";
        std::cout << "Right Child\t" << arr[(2 * index) + 2] << "\n";
        if (index == 0)
        {
            std::cout << "It's a Root of Tree\t" << arr[index] << "\n";
        }
        else
        {
            index = floor((index - 1) / 2);
            std::cout << "Parent\t" << arr[index] << "\n";
        }
    }
    void print()
    {
        for (int i = 0; i < 15; i++)
        {
            std::cout << arr[i] << "\t";
        }
        std::cout << "\n";
    }
};

int main()
{
    ArrayTree tree = ArrayTree();
    for (int i = 0; i < 15; i++)
    {
        tree.insert(i + 1, i);
    }
    tree.getParentLeftAndRight(5);
}