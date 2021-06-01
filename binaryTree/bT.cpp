#include<iostream>

struct node
{
    int data_;
    struct node *left_;
    struct node *right_;
};

class BinaryTree{
    private:
        struct node* root = NULL;
        struct node *newnode_,*tempnode_;
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
            if(root == NULL){
                root = tempnode_ = newnode_;
            }else
            {
                
            }
            
        }

};