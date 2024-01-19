#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};
void rec(TreeNode* head,int d,vector<vector<int>>&ans){
    if(head==NULL)return;
    if(ans.size()<=d){
        while(ans.size()<=d)
        ans.push_back({});
    }
    ans[d].push_back(head->val);
    rec(head->left,d+1,ans);
    rec(head->right,d+1,ans);
}
vector<vector<int> > res(TreeNode* A) {
    vector<vector<int>> ans;
    rec(A,0,ans);
    return ans;
}
void createTree(TreeNode* node, int i, vector<string>& arr) {
    if (node != nullptr) {
    if (2 * i + 1 < arr.size()) {
        if (arr[2 * i + 1] == "null")
        node->left = nullptr;
        else
        node->left = new TreeNode(stoi(arr[2 * i + 1]));
        createTree(node->left, 2 * i + 1, arr);
    }


    if (2 * i + 2 < arr.size()) {
        if (arr[2 * i + 2] == "null")
        node->right = nullptr;
        else
        node->right = new TreeNode(stoi(arr[2 * i + 2]));
        createTree(node->right, 2 * i + 2, arr);
    }
    }
}
TreeNode* levelOrderCreateTree(vector<string>& arr) {
    if (arr.size() == 0)
    return nullptr;
    TreeNode *head = new TreeNode(stoi(arr[0]));
    createTree(head, 0, arr);
    return head;
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    TreeNode* node = levelOrderCreateTree(arr);
    vector<vector<int>>out=res(node);
    for(auto x:out){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}