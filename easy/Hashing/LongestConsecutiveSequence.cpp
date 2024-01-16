#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(vector<int>A){
    set<int>st;
    for(auto x:A){
        st.insert(x);
    }
    int ans=1;
    int curans=1;
    for(auto x:st){
        if(st.find(x+1)!=st.end()){
            curans++;
            ans=max(ans,curans);
        }
        else{
            curans=1;
        }
    }
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
    cout<<res(arr);
    // for(auto x:out){
    //     cout<<x<<" ";
    // }
    return 0;
}