#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        val = data;
        left = right = NULL;
    }
};
void inorderTraversal(TreeNode *root)
{
    while (!root)
    {
        return;
    }
    cout << (root->val) << " ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

TreeNode *invertTree(TreeNode *root)
{
    if (!root)
    {
        return {};
    }
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    inorderTraversal(root);
    cout << endl;
    root = invertTree(root);
    inorderTraversal(root);
    return 0;
}