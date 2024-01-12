#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A){
    if(A%400==0){
        return 1;
    }
    else if(A%100==0){
        return 0;
    }
    else if(A%4==0){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}