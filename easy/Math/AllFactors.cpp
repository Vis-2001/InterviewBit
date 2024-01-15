#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(int A){
    set<int>ans;
    for(int i=1;i*i<=A;i++){
        if(A%i==0){
            ans.insert(i);
            ans.insert(A/i);
        }
    }
    vector<int>a;
    for(auto x:ans){
        a.push_back(x);
    }
    return a;
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