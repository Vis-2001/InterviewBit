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
 void postorder(vector<int>&ans,TreeNode* A){
     if(A==NULL)return;
     postorder(ans,A->left);
     postorder(ans,A->right);
     ans.push_back(A->val);
 }
vector<int> res(TreeNode* A) {
    vector<int>ans;
    postorder(ans,A);
    return ans;
}