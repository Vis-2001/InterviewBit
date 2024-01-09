#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 2D Dp soln Not optimal give MLE
int rec(int ind,int prev,vector<int>A,vector<vector<int>>&dp){
    if(ind>=A.size())return 0;
    if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
    int nt=rec(ind+1,prev,A,dp);
    if(prev==-1 || A[ind]>A[prev]){
        nt=max(nt,1+rec(ind+1,ind,A,dp));
    }
    return dp[ind][prev+1]=nt;
}
int res(const vector<int> &A) {
    vector<vector<int>>dp(A.size(),vector<int>(A.size()+1,-1));
    return rec(0,-1,A,dp);
}

//most optimal solution
// int res(const vector<int> &A) {
//     int n=A.size();
//      if(n==0)return 0;
//      vector<int>ans(n,1);
//      int max_len=0;
//      for( int i=0;i<n;i++)
//      {
//          for ( int j=0;j<i;j++)
//          {
//              if(A[i]>A[j]){
//               ans[i]=max(ans[i],ans[j]+1);  
//              }
//          }
//          max_len=max(ans[i],max_len);
//      }
//      return max_len;
// }

int main(){
    int n,temp;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cout<<res(A);
    return 0;
}