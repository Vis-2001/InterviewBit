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
TreeNode* rec(const vector<int>A,int s,int e){
    if(s>e)return NULL;
    int m=s+(e-s)/2;
    TreeNode* ans=new TreeNode(A[m]);
    ans->left=rec(A,s,m-1);
    ans->right=rec(A,m+1,e);
    return ans;
}
TreeNode* res(const vector<int> &A) {
    int s=A.size()-1;
    return rec(A,0,s);
}