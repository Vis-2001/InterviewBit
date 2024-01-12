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
 vector<TreeNode*> rec(int s,int e)
 {
     vector<TreeNode*> ans;
     if(s>e) return {NULL};
     for(int i=s;i<=e;i++)
     {
         vector<TreeNode*> leftsubtree=rec(s,i-1);
         vector<TreeNode*> rightsubtree=rec(i+1,e);       
         for(auto l:leftsubtree){
             for(auto r:rightsubtree){
                 TreeNode* newroot=new TreeNode(i);
                 newroot->left=l;
                 newroot->right=r;
                 ans.push_back(newroot);
             }
         }
     }
     return ans;
 }
vector<TreeNode*>res(int n){
    return rec(1,n);
}
void helper(TreeNode* head){
    if(head==NULL)return;
    cout<<head->val<<" ";
    helper(head->left);
    helper(head->right);
}
void preorder(vector<TreeNode*>arr){
    for(auto x:arr){
        helper(x);
        cout<<endl;
    }
}
int main(){
    int n,temp;
    cin>>n;
    preorder(res(n));
    return 0;
}