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
vector<int> ans;
vector<int> inorderTraversal(TreeNode *root)
{
    while (!root)
    {
        return {};
    }
    inorderTraversal(root->left);
    ans.push_back(root->val);
    inorderTraversal(root->right);
    return ans;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<int> a = inorderTraversal(root);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}