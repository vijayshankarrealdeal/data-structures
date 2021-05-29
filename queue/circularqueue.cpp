#include <iostream>

class CircularQueue
{
private:
    int array_[3];
    int front_, rear_ = -1;
    int size_ = sizeof(array_) / sizeof(*array_);

public:
    void transverse_()
    {
        int i = front_;
        if (front_ = rear_ == -1)
        {
            std::cout << "Queue is Empty"
                      << "\n";
        }
        else
        {
            while (i != rear_)
            {
                std::cout << array_[i]<<"\t";
                i = (i + 1) % size_;
            }
            std::cout << array_[rear_];
        }
        std::cout << "\n";
    }
    bool queueFull_()
    {
        if (front_ == (rear_ + 1) % size_)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool queueEmpty_()
    {
        if (front_ = rear_ == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue_(int element_)
    {

        if (queueFull_())
        {
            std::cout << "The queue is full\n";
        }
        else
        {
            if (front_ = rear_ == -1)
            {
                front_ = 0;
                rear_ = 0;
                array_[rear_] = element_;
            }
            else
            {
                rear_ = (rear_ + 1) % size_;
                array_[rear_] = element_;
            }
        }
    }
    void dequeue_()
    {
        if (queueEmpty_())
        {
            std::cout << "The queue is empty\n";
        }
        else if (front_ == rear_)
        {
            front_ = rear_ = -1;
        }
        else
        {
            front_ = (front_ + 1) % size_;
        }
    }
};
int main()
{
    CircularQueue queue;
    queue.enqueue_(29);
    queue.enqueue_(20);
    queue.enqueue_(30);
    queue.enqueue_(40);
    queue.enqueue_(50);
    queue.enqueue_(60);
    queue.dequeue_();
    queue.dequeue_();
    queue.transverse_();
}