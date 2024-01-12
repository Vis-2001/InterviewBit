#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0;
    int ans=0;
    while(i<A.size()-1){
        if(A[i]==A[i+1]){
            ans++;
            i=i+2;
        }
        else{
            i++;
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