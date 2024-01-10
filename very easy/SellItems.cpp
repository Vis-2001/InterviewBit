#include<stdio.h>
#include<iostream>
using namespace std;
int res(int A,int B){
    return ((B+A-1)/A+4)/5;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<res(n,m);
    return 0;
}