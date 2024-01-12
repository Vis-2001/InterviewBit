#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){};
};
ListNode* res(ListNode* A) {
    if(A==NULL)return A;
    stack<ListNode*>s;
    while(A!=NULL){
        s.push(A);
        A=A->next;
    }
    A=s.top();
    s.pop();
    ListNode* temp=A;
    while(s.empty()==false){
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
    return A;
}
int main(){
    int n;
    cin>>n;
    ListNode* head=NULL;
    ListNode* temp;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        if(head=NULL){
            head=new ListNode(t);
            temp=head;
        }
        else{
            temp->next=new ListNode(t);
            temp=temp->next;
        }
    }
    ListNode* out=res(head);
    temp=out;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}