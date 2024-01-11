#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(int A,int B,int C){
    int ans=(B/10)-(A/10);
    if(A%10>C){
        ans--;
    }
    if(B%10>=C){
        ans++;
    }
    return ans;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<res(a,b,c);
    return 0;
}