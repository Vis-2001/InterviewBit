#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int res(vector<int> &A, int B, int C) {
    int sum=0;
    int i=0,j=0;
    int ans=0;
    while(i<A.size()){
        if(sum>C){
            sum=0;
            i++;
            j=i;
        }
        else{
            sum+=A[j++];
        }
        if(sum<=C && sum>=B){
            ans++;
        }
        if(j==A.size()){
            sum=0;
            i++;
            j=i;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>n>>m;
    cout<<res(arr,n,m);
    return 0;
}