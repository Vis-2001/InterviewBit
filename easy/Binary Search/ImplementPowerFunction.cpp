#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int x,int n,int d){
    bool b = false;
    if(x == 0 || d == 1) return 0;
    if(x == 1|| n == 0) return 1;
    if(x < 0 && (n%2 == 1)) b = true;
    long long int ans = 1;
    long long int y = x;
    while(n) {
        if(n%2) ans = (ans*y)%d;
        y = (y*y)%d;
        n = n/2;
    }
    if(b) return (d+ans);
    return ans;
}
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    cout<<res(n,m,x);
    return 0;
}