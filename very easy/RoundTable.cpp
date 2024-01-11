#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
    if (n == 0)
    return 1;
    return n * factorial(n - 1)%1000000007;
}
int res(int A) {
    long long int ans = (factorial(A)*2)%1000000007;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}
