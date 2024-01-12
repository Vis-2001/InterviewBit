#include<stdio.h>
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){};
};
ListNode* res(ListNode* A) {
    ListNode* temp=A;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->val==temp->next->val){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
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