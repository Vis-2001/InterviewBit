#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long res(string A) {
    long ans=0;
    long num=0;
    for(auto x:A){
        if(x-'0'>=0 && x-'0'<=9){
            num=num*10+(x-'0');
        }
        else{
            ans+=num;
            num=0;
        }
    }
    return ans+num;
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}