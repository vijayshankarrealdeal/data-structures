#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
};
Node *newNode(int key)
{
    Node *node = new Node;
    node->key = key;
    node->left = node->right = nullptr;
    return node;
}

Node *construct(int start, int end,
                vector<int> const &postorder, int &pIndex,
                unordered_map<int, int> &map)
{
    if (start > end)
    {
        return nullptr;
    }
    Node *root = newNode(postorder[pIndex--]);
    int index = map[root->key];
    root->right = construct(index + 1, end, postorder, pIndex, map);
    root->left = construct(start, index - 1, postorder, pIndex, map);
    return root;
}
Node* construct(vector<int> const &inorder, vector<int> const &postorder)
{
    int n = inorder.size();
    unordered_map<int, int> map;
    for (int i = 0; i < inorder.size(); i++) {
        map[inorder[i]] = i;
    }
    int pIndex = n - 1;
    return construct(0, n - 1, postorder, pIndex, map);
}

void inorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->key << ' ';
    inorderTraversal(root->right);
}



int main()
{
    std::vector<int> inorder = {4, 2, 1, 7, 5, 8, 3, 6};
    std::vector<int> postorder = {4, 2, 7, 8, 5, 6, 3, 1};
    Node *root = construct(inorder, postorder);
    inorderTraversal(root);
    std::cout << "\n";
}