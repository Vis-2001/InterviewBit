#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeLinkNode
{
    int val;
    TreeLinkNode *left;
    TreeLinkNode *right;
    TreeLinkNode *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
void bridge(TreeLinkNode* l,TreeLinkNode* r){
    if(l==NULL || r==NULL){
        return;
    }
    l->next=r;
    bridge(l->right,r->left);
}
void rec(TreeLinkNode* A){
    if(A==NULL)return;
    bridge(A->left,A->right);
    rec(A->left);
    rec(A->right);
}
void res(TreeLinkNode* A) {
    rec(A);
}