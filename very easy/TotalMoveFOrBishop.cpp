#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A,int B){
    return min(A-1,B-1)+min(8-A,B-1)+min(A-1,8-B)+min(8-A,8-B);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<res(n,m);
    return 0;
}