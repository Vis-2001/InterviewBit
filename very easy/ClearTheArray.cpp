#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A) {
    map<int,int>m;
    int ans=0;
    for(auto x:A){
        m[x]++;
        ans=max(ans,m[x]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>A(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<res(A);
    return 0;
}