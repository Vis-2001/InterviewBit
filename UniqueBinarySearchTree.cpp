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
vector<TreeNode*>rec(int s,int e){
    if(s>e){
        return {NULL};
    }
    vector<TreeNode*>ans;
    for(int i=s;i<=e;i++){
        vector<TreeNode*>leftTree=rec(s,i-1);
        vector<TreeNode*>rightTree=rec(i+1,e);
        for(auto x:leftTree){
            for(auto y:rightTree){
                TreeNode *head=new TreeNode(i);
                head->left=x;
                head->right=y;
                ans.push_back(head);
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