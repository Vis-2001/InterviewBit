#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int> &A) {
    int maxEle=INT_MIN;
    int cnt=0;
    for(auto x:A){
        if(x>maxEle){
            cnt++;
            maxEle=x;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}
