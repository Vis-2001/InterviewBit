#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long res(long A,int B){
    if(B==1){
        return A;
    }
    if(A%2==0){
        A=A/2;
    }
    else{
        A=3*A+1;
    }
    return res(A,B-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<res(n,m);
    return 0;
}