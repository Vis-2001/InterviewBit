#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(unsigned int A){
    int ans=0;
    while(A){
        ans=ans+(A&1);
        A=A>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}