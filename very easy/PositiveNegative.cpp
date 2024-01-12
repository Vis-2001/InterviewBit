#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(vector<int> A) {
    int p=0,n=0;
    for(auto x:A){
        if(x>0){
            p++;
        }
        if(x<0){
            n++;
        }
    }
    return {p,n};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>out=res(arr);
    cout<<out[0]<<" "<<out[1];
    return 0;
}