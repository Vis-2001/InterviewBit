#include<stdio.h>
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x),next(NULL){}; 
};
ListNode* res(ListNode* A, int B) {
    ListNode* temp=A;
    while(temp!=NULL){
        temp->val=(temp->val/B)*B;
        temp=temp->next;
    }
    return A;
}
int main(){
    int n,m;
    cin>>n;
    ListNode* head=NULL;
    ListNode* temp=NULL;
    for(int i=0;i<n;i++){
        cin>>m;
        if(head==NULL){
            head=new ListNode(m);
            temp=head;
        }
        else{
            temp->next=new ListNode(m);
            temp=temp->next;
        }
    }
    cin>>m;
    ListNode* ans=res(head,m);
    return 0;
}