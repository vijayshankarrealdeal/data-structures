#include<iostream>
struct poly
{
    int exp_;
    int coff_;
    struct poly *next_;
};

class Polynomial{
    private:
        struct poly *head_ =NULL;
        struct poly *newnode_,*tempnode_;
    public:
        void addPolynomial(int coff_,int exp_)
        {
            newnode_ = new poly;
            if(head_ == NULL)
            {
                head_ = tempnode_ = newnode_;
            }else{
                tempnode_->next_ = newnode_;
                tempnode_ = newnode_;
            }
        }
        
};

int main()
{
    
}