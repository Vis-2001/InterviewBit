#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A) {
    bool digit=false,lower=false,upper=false,special=false;
    if(A.length()<8 || A.length()>15){
        return false;
    }
    for(auto x:A){
        if(x-'0'>=0 && x-'0'<=9){
            digit=true;
        }
        if(x-'a'>=0 && x-'a'<26){
            lower=true;
        }
        if(x-'A'>=0 && x-'A'<26){
            upper=true;
        }
        if(x=='@' || x=='#' || x=='%' || x=='&' || x=='!' || x=='$' || x=='*'){
            special=true;
        }
    }
    return digit&lower&upper&special;
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}