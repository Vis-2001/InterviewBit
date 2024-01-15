#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>res(vector<vector<int>>A){
    vector<int>row(A.size(),1);
    vector<int>col(A[0].size(),1);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            A[i][j]=row[i]*col[j];
        }
    }
    return A;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>out=res(arr);
    for(auto y:out){
        for(auto x:y){
            cout<<x<<" ";
        }
    }
    return 0;
}