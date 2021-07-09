#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int value;
    node *left;
    node *right;
};
void printCurrentLevel(node *root,int level)
{
    if(root == nullptr) return;
    if(level == 1)
    {
        cout<<root->value;
    }
    else if(level>1){
        printCurrentLevel(root->left,level-1);
        printCurrentLevel(root->right,level-1);
    }

}
int height(node *root)
{
    if(root == nullptr)
    {
        return 0;
    }
    else{
        int lheight = height(root->left);
        int rheight = height(root->right);
        if(lheight>rheight)
        {
            return lheight + 1;
        }else{
            return rheight + 1;
        }
    }
}
void printTransverseLevel(node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
    {
        printCurrentLevel(root,i);
    }
    

}

node *newnode(int data)
{
    node *newnode = new node;
    newnode->value = data;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}



int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    printTransverseLevel(root);
}