#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res(int A){
    if(A==0){
        return {};
    }
    vector<vector<int>>mainans;
    vector<int>ans={1};
    mainans.push_back(ans);
    for(int i=0;i<A-1;i++){
        vector<int>subans={1};
        for(int j=0;j<i;j++){
            subans.push_back(ans[j]+ans[j+1]);
        }
        subans.push_back(1);
        ans=subans;
        mainans.push_back(subans);
        // ans=subans;
    }
    return mainans;
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