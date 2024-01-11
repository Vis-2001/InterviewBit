#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A){
    long long int a=0,b=0;
    long long int c=1;
    for(int i=1;i<A;i++){
        a=a+i;
        b=(b+a)%1000000007;
        c=(c*i)%1000000007;
    }
    c=(c*b)%1000000007;
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}