#include <bits/stdc++.h>

struct Node
{
    int key;
    Node *left;
    Node *right;
};

class PostOrderInorder
{
private:
    Node *construct(int start, int end, std::vector<int> &postorder, int pIndex, std::unordered_map<int, int> &map)
    {
        if (start > end)
            return NULL;
        Node *node = newNode(postorder[pIndex--]);
        int index = map[node->key];
        node->left = construct(start, index - 1, postorder, pIndex, map);
        node->right = construct(index + 1, end, postorder, pIndex, map);
        return node;
    }
    Node *newNode(int key)
    {
        Node *node = new Node;
        node->key = key;
        node->left = NULL;
        node->right = NULL;
        return node;
    }

public:
    Node *createTree(std::vector<int> &inorder, std::vector<int> &postorder)
    {
        int n = inorder.size();
        std::unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[inorder[i]] = i;
        }
        int pIndex = n-1;
        return construct(0, n - 1, postorder, pIndex, map);
    }
    void inorderPrint(Node *root)
    {
        if (root != NULL)
        {
            inorderPrint(root->left);
            std::cout << root->key << "\t";
            inorderPrint(root->right);
        }
    }
};

int main()
{
    PostOrderInorder tree = PostOrderInorder();
    std::vector<int> inorder={9, 3, 15, 20, 7};
    std::vector<int> postorder={9, 15, 7, 20, 3};
    Node *root = tree.createTree(inorder, postorder);
    tree.inorderPrint(root);
    std::cout << "\n";
}