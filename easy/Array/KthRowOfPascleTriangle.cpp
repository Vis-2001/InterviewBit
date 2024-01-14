#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> res(int A){
    vector<int>ans={1};
    for(int i=0;i<A;i++){
        vector<int>subans={1};
        for(int j=0;j<i;j++){
            subans.push_back(ans[j]+ans[j+1]);
        }
        subans.push_back(1);
        ans=subans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>out=res(n);
    for(auto x:out){
        cout<<x<<" ";
    }
    return 0;
}