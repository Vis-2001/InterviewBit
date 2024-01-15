#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(int A){
    if(A==0){
        return "0";
    }
    string ans="";
    while(A){
        char ch='0'+A%2;
        ans=ch+ans;
        A=A/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}