#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A) {
    int ans=1;
    do{
        ans=ans*(A%10);
        A=A/10;
    }while(A);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}
