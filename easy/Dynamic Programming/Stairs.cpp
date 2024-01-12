#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rec(int step,int A,vector<int>&dp){
    if(step>A){
        return 0;
    }
    if(step==A){
        return 1;
    }
    if(dp[step]!=-1)return dp[step];
    return dp[step]=rec(step+1,A,dp)+rec(step+2,A,dp);
}
int res(int A) {
    vector<int>dp(A,-1);
    return rec(0,A,dp);
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}