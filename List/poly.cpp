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
                tempnode_ = tempnode_->next_;
            }
        }
        void transverse_()
        {
            tempnode_ = head_;
            while (tempnode_!=NULL)
            {
                std::cout<<tempnode_->coff_<<"X^"<<tempnode_->exp_<<"\t";
            }
            std::cout<<"\n";
        }
        
};

int main()
{
    Polynomial p;
    p.addPolynomial(3,14);
    p.addPolynomial(2,8);
    p.addPolynomial(1,0);
    p.transverse_();
}