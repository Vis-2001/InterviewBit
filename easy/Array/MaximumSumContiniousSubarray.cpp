#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(const vector<int> &A) {
    int sm=0;
    int ans=A[0];
    for(auto x:A){
        sm=sm+x;
        ans=max(sm,ans);
        if(sm<0){
            sm=0;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<res(arr);
    return 0;
}
