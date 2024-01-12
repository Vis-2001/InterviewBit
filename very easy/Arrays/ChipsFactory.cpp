#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(vector<int> &A) {
    int cnt=0;
    vector<int>ans;
    for(auto x:A){
        if(x==0){
            cnt++;
        }
        else{
            ans.push_back(x);
        }
    }
    for(int i=0;i<cnt;i++){
        ans.push_back(0);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int>out=res(A);
    for(auto x:out){
        cout<<x<<endl;
    }
    return 0;
}