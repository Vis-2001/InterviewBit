#include<stdio.h>
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){};
};
ListNode* res(ListNode* A,int B) {
    int i=0;
    ListNode* slow=A;
    ListNode* fast=A;
    for(;i<B;i++){
        if(fast==NULL){
            break;
        }
        fast=fast->next;
    }
    if(i<B || fast==NULL){
        return slow->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
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
    cin>>n;
    ListNode* out=res(head,n);
    temp=out;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}