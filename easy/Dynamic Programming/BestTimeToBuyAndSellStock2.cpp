#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rec(int ind,int buy, const vector<int> &A,vector<vector<int>> &dp)
{
    if(ind>=A.size())return 0;
    if(dp[ind][buy]!=-1)return dp[ind][buy];   
    int profit;
    if(buy){
        profit= max( -A[ind]+rec(ind+1,0,A,dp) , 0 +rec(ind+1,1,A,dp) ); 
    }
    else{
        profit= max( +A[ind]+rec(ind+1,1,A,dp) , 0 +rec(ind+1,0,A,dp) );
    }
    return dp[ind][buy]=profit;
}
int res(const vector<int> &A) {
    int n=A.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    return rec(0,1,A,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<res(arr);
    return 0;
}