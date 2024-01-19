#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(string A,string B){
    int n=A.length()-1;
    int m=B.length()-1;
    string ans="";
    int carry=0;
    while(n>=0 && m>=0){
        if(A[n]=='1' && B[m]=='1'){
            if(carry==1){
                ans='1'+ans;
            }
            else{
                carry=1;
                ans='0'+ans;
            }
        }
        else if(A[n]=='0' && B[m]=='0'){
            if(carry==1){
                ans='1'+ans;
                carry=0;
            }
            else{
                ans='0'+ans;
            }
        }
        else{
            if(carry==1){
                ans='0'+ans;
            }
            else{
                ans='1'+ans;
            }
        }
        n--;
        m--;
    }
    while(n>=0){
        if(carry){
            if(A[n]=='1'){
                ans='0'+ans;
            }
            else{
                carry=0;
                ans='1'+ans;
            }
        }
        else{
            ans=A[n]+ans;
        }
        n--;
    }
    while(m>=0){
        if(carry){
            if(B[m]=='1'){
                ans='0'+ans;
            }
            else{
                carry=0;
                ans='1'+ans;
            }
        }
        else{
            ans=B[m]+ans;
        }
        m--;
    }
    if(carry){
        ans='1'+ans;
    }
    return ans;
}
int main(){
    string A,B;
    cin>>A>>B;
    cout<<res(A,B);
    return 0;
}