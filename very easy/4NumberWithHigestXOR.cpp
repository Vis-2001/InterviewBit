#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            for(int k=j+1;k<A.size();k++){
                for(int l=k+1;l<A.size();l++){
                    ans=max(ans,A[i]^A[j]^A[k]^A[l]);
                }
            }
        }
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