#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A){
    int s=0;
    int l=A.size()-1;
    int m=(s+l)/2;
    while(s<=l){
        m=(s+l)/2;
        if((m == 0 || A[m] < A[m-1]) && (m == A.size()-1 || A[m] < A[m+1]))
            return A[m];
        if(A[m]>A[l]){
            s=m+1;
        }
        else{
            l=m-1;
        }
    }
    return A[m];
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cin>>n;
    cout<<res(arr);
    return 0;
}