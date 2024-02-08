#include<stdio.h>
#include<iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};
int rec(TreeNode* A,int &ans){
    if(A==NULL){
        return 0;
    }
    int l=1+rec(A->left,ans);
    int r=1+rec(A->right,ans);
    if(l-r<-1 || l-r>1){
        ans=0;
    }
    return max(l,r);
}
int res(TreeNode* A) {
    int ans=1;
    rec(A,ans);
    return ans;
}