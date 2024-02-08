#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};
int ans(TreeNode* l,TreeNode* r){
    if(l==NULL && r==NULL){
        return 1;
    }
    if(l==NULL || r==NULL){
        return 0;
    }
    if(l->val==r->val){
        return ans(l->left,r->right) && ans(l->right,r->left);
    }
    return 0;
}
int res(TreeNode* A) {
    return ans(A->left,A->right);
}