#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    return A;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>out=res(arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<out[i][j];
        }
    }
    return 0;
}