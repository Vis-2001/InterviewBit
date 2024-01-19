#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A,int B){
    int s=0;
    int e=A.size()-1;
    int m;
    while(s<=e){
        m=(s+e)/2;
        if(A[m]==B){
            break;
        }
        else if(A[m]<B){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    if(A[m]!=B){
        return 0;
    }
    int ans=1;
    s=m-1;
    while(s>=0 && A[s]==B){
        ans++;
        s--;
    }
    s=m+1;
    while(s<A.size() && A[s]==B){
        ans++;
        s++;
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
    cin>>n;
    cout<<res(arr,n);
    return 0;
}