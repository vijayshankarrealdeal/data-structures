#include <iostream>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    node *new_Node = new node;
    new_Node->data = item;
    new_Node->left = NULL;
    new_Node->right = NULL;
    return new_Node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        std::cout << root->data << "\t";
        inorder(root->right);
    }
}

struct node *insert_node(struct node *node, int key)
{
    if (node == NULL)
    {
        return newNode(key);
    }
    if (key < node->data)
    {
        node->left = insert_node(node->left, key);
    }
    else
    {
        node->right = insert_node(node->right, key);
    }
    return node;
}

void search(int key, struct node *root)
{
    int cout = 0;
    if (root != NULL)
    {
        search(key, root->left);
        if (root->data == key)
        {
            cout++;
            std::cout << "Key Found"
                      << "at\t" << cout + 1 << "\n";
            return;
        }
        else
        {
            cout++;
        }
        search(key, root->right);
    }
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    struct node *root = NULL;
    int a[10] = {8, 3, 10, 1, 6, 4};
    int n = sizeof(a) / sizeof(*a);
    for (int i = 0; i < n; i++)
    {
        root = insert_node(root, a[i]);
    }

    deleteNode(root, 6);
    inorder(root);
    std::cout << "\n";
}