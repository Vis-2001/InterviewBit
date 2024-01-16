#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> res(vector<int>A,int B){
    map<int,int>m;
    vector<int>ans={INT_MAX,INT_MAX};
    for(int i=0;i<A.size();i++){
        int x=A[i];
        if(m[B-x]!=0){
            if(ans[1]>=(i+1)){
                ans[0]=m[B-x];
                ans[1]=i+1;
            }
        }
        if(m[x]==0){
            m[x]=i+1;
        }
    }
    if(ans[0]==INT_MAX)return {};
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    // for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
    // }
    cin>>n;
    vector<int>out=res(arr,n);
    // for(auto x:out){
    //     cout<<x<<" ";
    // }
    return 0;
}