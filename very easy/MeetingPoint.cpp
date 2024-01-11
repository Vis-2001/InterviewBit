#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<vector<int>>A){
    int f1x=A[0][0],f1y=A[0][1],f2x=A[0][0],f2y=A[0][1];
    for(auto x:A){
        if(x[0]==f1x){
            f1y=min(x[1],f1y);
        }
        if(x[0]<f1x){
            f1x=x[0];
            f1y=x[1];
        }
        if(x[1]==f2y){
            f2x=min(f2x,x[0]);
        }
        if(x[1]<f2y){
            f2y=x[1];
            f2x=x[0];
        }
    }
    return abs(f1x-f2x)+abs(f1y-f2y);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>A(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>A[i][0]>>A[i][1];
    }
    cout<<res(A);
    return 0;
}