#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(int A){
    string ans = "";
    char ch ;
    while(A)
    {
        if(A%26 == 0)
        {
            ch ='Z';
        }
        else
            ch = 'A' + A%26 -1;
        ans = ch+ans;
        A=(A-1)/26;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}