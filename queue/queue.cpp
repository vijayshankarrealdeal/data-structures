#include<iostream>

class Queue{
    private:
        int array_[5];
        int front_ = -1;
        int rear_ = -1;
        int size_ = sizeof(array_)/sizeof(*array_);
    public:
        void transverse_()
        {
            for(int i=front_;i<rear_;i++)
            {
                std::cout<<array_[i]<<"\t";
            }
        }
        bool queueFull()
        {
            if(rear_ == (size_-1))
            {
                return true;
            }else{
                return false;
            }
        }
        bool queueEmpty()
        {
            if(front_ == rear_)
            {
                return true;
            }
            else{
                return false;
            }
        }
        void enqueue_(int element_)
        {
            if(queueFull())
            {
                std::cout<<"The Queue is full\n";
            }
            else{
                array_[rear_++] = element_;
            }
        }
        void dequeue_()
        {
            if(queueEmpty())
            {
                std::cout<<"The Queue is Empty";
            }
            else{
                front_++;
            }
        }
};
int main()
{
    Queue queue;
    queue.enqueue_(20);
    queue.enqueue_(30);
    queue.enqueue_(40);
    queue.enqueue_(50);
    queue.enqueue_(60);
    queue.dequeue_();
    queue.dequeue_();
    queue.dequeue_();
    queue.dequeue_();
    queue.dequeue_();
    queue.dequeue_();
    queue.transverse_();
}
