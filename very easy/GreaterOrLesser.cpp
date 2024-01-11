#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A, vector<int> &B, int C) {
    int a=0,b=0;
    for(auto x:A){
        if(x>C){
            a++;
        }
    }
    for(auto x:B){
        if(x<C){
            b++;
        }
    }
    return max(a,b);
}
int main(){
    int n;
    cin>>n;
    vector<int>A(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>n;
    vector<int>B(n,0);
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    cin>>n;
    cout<<res(A,B,n);
    return 0;
}