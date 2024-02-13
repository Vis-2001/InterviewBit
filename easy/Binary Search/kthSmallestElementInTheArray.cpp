#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int res(const vector<int> &A, int B) {
    priority_queue<int>pq;
    for(auto x:A){
        if(pq.size()<B){
            pq.push(x);
        }
        else{
            if(pq.top()>x){
                pq.pop();
                pq.push(x);
            }
        }
    }
    return pq.top();
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>n;
    cout<<res(arr,n);
    return 0;
}