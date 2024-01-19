#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A){
    int s=0,e=A;
    while(s<=e){
        long long int m=(s+e)/2;
        if(m*m<=A){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return e;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}