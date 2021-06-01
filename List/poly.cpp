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
        void addPolynomial(int coffT_,int expT_)
        {
            newnode_ = new poly;
            newnode_->coff_ = coffT_;
            newnode_->exp_ = expT_;
            newnode_->next_ = NULL;
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
                tempnode_ = tempnode_->next_;
            }
            std::cout<<"\n";
        }

        void addploy_(Polynomial a,Polynomial b)
        {
            ///to be imple....
           struct poly *ptr1 = new poly;
           struct poly *ptr2 = new poly;
           ptr1 = a.head_;
           ptr2 = b.head_;
            std::cout<<ptr1->coff_;
        }
        
};

int main()
{
    Polynomial a,b;
    a.addPolynomial(3,14);
    a.addPolynomial(2,8);
    a.addPolynomial(1,0);
    a.transverse_();
    std::cout<<"\n";
    b.addPolynomial(8,14);
    b.addPolynomial(-3,10);
    b.addPolynomial(10,6);
    a.addploy_(a,b);
}