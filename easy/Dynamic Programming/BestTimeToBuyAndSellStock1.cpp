#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(const vector<int> &A) {
    if(A.size()==0)return 0;
    int low=A[0];
    int ans=0;
    for(int i=1;i<A.size();i++){
        if(A[i]<low){
            low=A[i];
        }
        else{
            ans=max(ans,A[i]-low);
        }
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