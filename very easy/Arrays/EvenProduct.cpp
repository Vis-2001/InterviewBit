#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A){
     int x=1;
    for(int i=1;i<=A.size();i++){
        x=(x*2)%1000000007;
    }
    return x-1;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cout<<res(v);
    return 0;
}