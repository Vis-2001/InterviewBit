#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>res(vector<int>A,vector<int>B){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else{
            j++;
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
    cin>>n;
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int>out=res(arr,arr2);
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    return 0;
}