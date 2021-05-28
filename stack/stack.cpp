#include<iostream>

class Stack {
    private:
        int array_[20];
        int size_ = sizeof(array_)/sizeof(*array_);
    public:
        
        int top_ = -1;
        bool isFull_()
        {
            if(top_ >= (size_ -1))
            {
                return true;
            }else{
                return false;
            }
        }
        bool isEmpty()
        {
            if(top_ == -1)
            {
                return true;
            }else{
                return false;
            }
        }
        int top_element_()
        {
            return array_[top_];
        }
        void print_()
        {
            for(int i = -1;i<top_;i++)
            {
                std::cout<<array_[i]<<"\t";
            }
            std::cout<<"\n";
        }
        void push_(int element_)
        {
            if(isFull_())
            {
                std::cout<<"The Stack is Full";
            }else{
                array_[top_++] = element_;
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                std::cout<<"The Stack is Empty";
            }else{

                top_ --;
                std::cout<<"Pop element\t"<<array_[top_]<<"\n";
                
            }
        }      
};
int main()
{
    Stack stack;
    stack.push_(20);
    stack.push_(30);
    stack.push_(40);
    stack.print_();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

}