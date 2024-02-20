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
   stack<ListNode*>st;
    int size=0;
    ListNode* temp=A;
    while(temp!=NULL){
        st.push(temp);
        temp=temp->next;
        size++;
    }
    temp=A;
    ListNode* temp1;
    for(int i=0;i<size/2;i++){
        temp1=st.top();
        st.pop();
        temp->val=temp1->val-temp->val;
        temp=temp->next;
    }
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