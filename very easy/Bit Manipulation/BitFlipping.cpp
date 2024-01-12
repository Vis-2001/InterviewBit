#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A) {
    vector<int>bits(32,0);
    int i=0;
    while(A){
        int b=A&1;
        bits[i++]=!b;
        A=A/2;
    }
    int ans=0;
    int v=1;
    for(int i=0;i<32;i++){
        ans=ans+(bits[i]*v);
        v=v*2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}