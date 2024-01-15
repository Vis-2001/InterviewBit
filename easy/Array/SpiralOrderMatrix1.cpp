#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>res(vector<vector<int>>A){
    int left = 0;
    int right = A[0].size()-1;
    int top = 0;
    int bottom = A.size()-1;
    vector<int>ans;
    int i;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(A[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(A[i][right]);
        }
        right--;
        if(left>right || top>bottom) break;
        for(int i=right;i>=left;i--){
            ans.push_back(A[bottom][i]);
        }
        bottom--;
        for(int i=bottom; i >= top; i--){
            ans.push_back(A[i][left]);
        }
        left++;
    }
    return ans;
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
    vector<int>out=res(arr);
    for(auto x:out){
        cout<<x<<" ";
    }
    return 0;
}