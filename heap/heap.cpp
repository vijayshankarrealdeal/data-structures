#include <iostream>
void maxHeap(int array[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && array[l] > array[largest])
    {
        largest = l;
    }
    if (r < n && array[r] > array[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        std::swap( array[i], array[largest]);
        maxHeap(array, n, largest);
    }
}
void heapSort(int array[],int n)
{
    for (int j = n - 1; j >= 0; j--)
    {
        std::swap(array[0],array[j]);
        maxHeap(array, n, 0);

    }
    
}
int main()
{
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
  
    int n = sizeof(array) / sizeof(*array);
    heapSort(array,n);
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << "\t";
    }
}