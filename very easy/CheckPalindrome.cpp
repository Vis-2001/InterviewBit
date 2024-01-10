#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A){
    vector<int>cnt(26,0);
    for(auto x:A){
        cnt[x-'a']++;
    }
    int freq=0;
    for(auto x:cnt){
        if(x%2==1){
            freq++;
        }
        if(freq>1){
            return 0;
        }
    }
    return 1;
}
int main(){
    string A;
    cin>>A;
    cout<<res(A);
    return 0;
}