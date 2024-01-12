#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A) {
    int dig=log10(A)+1;
    long long int arm=0;
    int val=A;
    while(val){
        long long int d=val%10;
        arm+=pow(d,dig);
        val=val/10;
    }
    return arm==A;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}
