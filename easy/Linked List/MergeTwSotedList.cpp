#include<stdio.h>
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){};
};
ListNode* res(ListNode* A,ListNode* B) {
    ListNode* ans;
    if(A->val<B->val){
        ans=A;
        A=A->next;
    }
    else{
        ans=B;
        B=B->next;
    }
    ListNode* temp=ans;
    while(A!=NULL && B!=NULL){
        if(A->val<B->val){
            temp->next=A;
            A=A->next;
        }
        else{
            temp->next=B;
            B=B->next;
        }
        temp=temp->next;
    }
    if(A!=NULL){
        temp->next=A;
    }
    if(B!=NULL){
        temp->next=B;
    }
    return ans;
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
    int m;
    cin>>m;
    ListNode* head1=NULL;
    // ListNode* temp;
    // int t;
    for(int i=0;i<m;i++){
        cin>>t;
        if(head1=NULL){
            head1=new ListNode(t);
            temp=head1;
        }
        else{
            temp->next=new ListNode(t);
            temp=temp->next;
        }
    }
    ListNode* out=res(head,head1);
    temp=out;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}