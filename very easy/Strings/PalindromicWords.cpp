#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A) {
    A=A+' ';
    string fwd="";
    string back="";
    int ans=0;
    for(auto x:A){
        if(x==' '){
            if(fwd.length()>0){
                if(fwd==back){
                    ans++;
                }
            }
            fwd="";
            back="";
        }
        else{
            fwd=fwd+x;
            back=x+back;
        }
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}