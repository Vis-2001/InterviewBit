#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(string A) {
    string ans="";
    for(auto x:A){
        int cnt=x-'a';
        if(cnt>=0 && cnt<26){
            ans+='A'+x-'a';
        }
        else{
            ans+='a'+x-'A';
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