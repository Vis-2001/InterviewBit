#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A){
    int ans=2*(A/6);
    if(A%6==1){
        ans++;
    }
    else if(A%6>1){
        ans+=2;
    }
    else{
        ans=ans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}