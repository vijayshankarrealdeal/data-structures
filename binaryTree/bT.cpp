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
            tempnode_ = root_;
            if (tempnode_->data_ < key_)
            {
                if (tempnode_->left_ == NULL)
                {
                    tempnode_ = newnode_;
                    tempnode_ = tempnode_->left_;
                }
            }
            else
            {
                if (tempnode_->data_ > key_)
                {
                    if (tempnode_->right_ == NULL)
                    {
                        tempnode_ = newnode_;
                        tempnode_ = tempnode_->right_;
                    }
                }
            }
        }
    }
    void printX(struct node* root)
    {
        if(root_!=NULL)
        {
            printX(root_->left_);
            std::cout<<root_->data_;
            printX(root_->right_);
        }
    }
};
int main()
{
    BinaryTree t;
    t.insert(23);
    t.insert(1);
    t.insert(19);
    t.insert(20);
    t.printX(t);
}