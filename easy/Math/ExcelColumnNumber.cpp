#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A){
    int val=0;
    for(auto x:A){
        val=val*26+(x-'A'+1);
    }
    return val;
}
int main(){
    string n;
    cin>>n;
    cout<<res(n);
    return 0;
}