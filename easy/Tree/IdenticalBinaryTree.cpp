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
int res(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL){
        return 1;
    }
    if(A==NULL || B==NULL){
        return 0;
    }
    if(A->val==B->val){
        return res(A->left,B->left) && res(A->right,B->right);
    }
    return 0;
}