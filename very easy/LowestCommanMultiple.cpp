#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long gcd(int A,int B){
    if(B==0){
        return A;
    }
    return gcd(B,A%B);
}
long res(int A,int B){
    return A/gcd(A,B)*B;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<res(n,m);
    return 0;
}