#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A,int B){
    int lsum=0;
    for(int i=0;i<B;i++){
        lsum+=A[i];
    }
    int ans=lsum;
    int rsum=0;
    for(int i=0;i<B;i++){
        lsum=lsum-A[B-i-1];
        rsum=rsum+A[A.size()-i-1];
        ans=max(ans,lsum+rsum);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp;
    vector<int>A;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cin>>n;
    cout<<res(A,n);
    return 0;
}