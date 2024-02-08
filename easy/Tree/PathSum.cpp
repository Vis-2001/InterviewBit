#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int res(TreeNode *r, int b)
{
    if (r == NULL)
        return 0;
    if (r->left == NULL && r->right == NULL)
        return b == r->val;
    return res(r->left, b - r->val) | res(r->right, b - r->val);
}