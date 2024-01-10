#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>res(vector<int>A){
    int i=0;
    int n=A.size();
    vector<int>ans;
    while(i<A.size()){
        if(A[i]<A[n-1]){
            break;
        }
        if(A[i]>A[n-1]){
            ans.push_back(A[i]);
        }
        else{
            int j=1;
            while(i+j<n-j-1 && A[i+j]==A[n-1-j]){
                j++;
            }
            if(A[i+j]>A[n-1-j]){
                ans.push_back(A[i]);
            }
            else{
                break;
            }
        }
        i++;
    }
    for(int j=n-1;j>=i;j--){
        ans.push_back(A[j]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>out=res(v);
    return 0;
}