#include <iostream>

struct node
{
    int data_;
    struct node *left_;
    struct node *right_;
};

class BinaryTree
{
private:
    struct node *root_ = NULL;
    struct node *newnode_, *tempnode_;

public:
    struct node *createNode(int key_)
    {
        newnode_ = new node;
        newnode_->data_ = key_;
        newnode_->left_ = NULL;
        newnode_->right_ = NULL;
        return newnode_;
    }
    void insert(int key_)
    {
        newnode_ = createNode(key_);
        if (root_ == NULL)
        {
            root_ = tempnode_ = newnode_;
        }
        else
        {
        }
    }
    void printX(struct node *root)
    {
        if (root_ != NULL)
        {
            printX(root_->left_);
            std::cout << root_->data_;
            printX(root_->right_);
        }
    }
};

int f(int n)

{
    static int r = 0;
    if(n<=0)
    {
        return 1;
    }
    if(n>3){
        r = n;
        return f(n-2)+2;
    }
    return f(n-1) + r;
}
int main()
{
    std::cout<<f(5);
}