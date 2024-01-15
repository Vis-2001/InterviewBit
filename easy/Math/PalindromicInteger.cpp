#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A){
     if(A<0){
        return 0;
    }
    int val=0;
    int sum=A;
    while(sum){
        val=val*10+sum%10;
        sum=sum/10;
    }
    return val==A;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}