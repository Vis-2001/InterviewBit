#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A, int B, int C) {
    int ans=0;
    for(auto x:A){
        if(x%2!=B%2){
            ans+=C;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>n>>m;
    cout<<res(arr,n,m);
    return 0;
}
