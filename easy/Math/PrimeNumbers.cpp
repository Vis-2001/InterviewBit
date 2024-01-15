#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(int A){
    vector <int> ans;
    vector <int> isPrime(A+1,0);
    for(int i=2;i<=A;i++)
    {
        if(isPrime[i]==0)
        ans.push_back(i);
        for(int j=0;j<ans.size() && ans[j]*i<=A;j++){
            isPrime[ans[j]*i]=1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>out=res(n);
    for(auto x:out){
        cout<<x<<" ";
    }
    return 0;
}