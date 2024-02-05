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
void inorder(TreeNode* A,vector<int>&v){
    if(A==NULL)return;
    inorder(A->left,v);
    v.push_back(A->val);
    inorder(A->right,v);
}
int res(TreeNode* A) {
    vector<int>v;
    inorder(A,v);
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>=v[i+1]){
            return 0;
        }
    }
    return 1;
}