#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A){
    int ans=1;
    vector<int>temp={A[0]};
    for(int i=1;i<A.size();i++){
        if(A[i]!=A[i-1]){
            ans++;
            temp.push_back(A[i]);
        }
    }
    A=temp;
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