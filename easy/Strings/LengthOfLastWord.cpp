#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A){
    int ans=0;
    int cur=0;
    for(auto x:A){
        if(x==' '){
            if(cur!=0){
                ans=cur;
            }
            cur=0;
        }
        else{
            cur++;
        }
    }
    if(cur!=0){
        return cur;
    }
    return ans;
}
int main(){
    string A;
    cin>>A;
    cout<<res(A);
    return 0;
}