#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A,int B){
    int s=0,e=A.size()-1;
    int m;
    while(s<=e){
        m=(s+e)/2;
        if(A[m]==B){
            return m;
        }
        if(A[m]<B){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return s;
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