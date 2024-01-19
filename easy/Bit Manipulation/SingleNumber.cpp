#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A){
    int ans=0;
    for(auto x:A){
        ans=ans^x;
    }
    return ans;
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