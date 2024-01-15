#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int rec(long long int A,long long int B,long long int C){
    if(B==0)
    {
        return 1;
    }
    else if(B%2==0)
    {
        return (rec(A,B/2,C) * rec(A,B/2,C))%C;
    }
    else
    {
        return (A * rec(A,B-1,C))%C;
    }
}
int res(int A, int B, int C) {
    if(A==0) return 0;
    if(A<0)
    {
    A=(A%C+C)%C;
    }
    return rec(A,B,C);
}
int main(){
    int n,m,o;
    cin>>n>>m>>o;
    cout<<res(n,m,o);
    return 0;
}