#include<iostream>

class CircularQueue{
    private:
        int array_[3];
        int front_,rear_ = -1;
        int size_ = sizeof(array_)/sizeof(*array_);
    public:
        void transverse_()
        {

        }
        bool queueFull_()
        {
            if(front_ == rear_)
            {
                return true;
            }else{
                return false;
            }
        }
        bool queueEmpty_()
        {
            if(front_=rear_ == -1 || (rear_%size_)==0 )
            {
                return true;
            }else{
                return false;
            }
        }
        void enqueue_(int element_)
        {
            
            if(queueFull_())
            {
                std::cout<<"The queue is full\n";
            }else{
                rear_ = (rear_+1)%size_;
                array_[rear_++] = element_;
            }
        }
        void dequeue_()
        {
            if(queueEmpty_())
            {
                std::cout<<"The queue is empty\n";
            }else{
                front_ = (front_+1)%size_;
                front_++;
            }
        }
};