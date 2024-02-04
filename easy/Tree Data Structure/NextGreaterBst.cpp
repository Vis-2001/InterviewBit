#include<stdio.h>
#include<iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};
TreeNode* res(TreeNode* A, int B) {
    TreeNode* temp=NULL;
    while(A){
        if(A->val<=B){
            A=A->right;
        }
        else{
            temp=A;
            A=A->left;
        }
    }
    return temp;
}
