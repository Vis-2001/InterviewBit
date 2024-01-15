#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > res(int A) {
    vector<vector<int>>ans(A,vector<int>(A,0));
    int top=0;
    int bottom=A-1;
    int left=0;
    int right=A-1;
    int val=1;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans[top][i]=val;
            val++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans[i][right]=val;
            val++;
        }
        right--;
        if(left>right || top>bottom) break;
        for(int i=right;i>=left;i--){
            ans[bottom][i]=val;
            val++;
        }
        bottom--;
        for(int i=bottom; i >= top; i--){
            ans[i][left]=val;
            val++;
        }
        left++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>out=res(n);
    for(auto x:out){
        for(auto y:x){
            cout<<y<<" ";
        }
    }
    return 0;
}