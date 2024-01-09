#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int res(vector<int>A,vector<int>B){
    vector<int>extra;
    for(int i=0;i<A.size();i++){
        extra.push_back(A[i]-B[i]);
    }
    int ind=-1;
    for(int i=0;i<A.size();i++){
        int gas=0;
        for(int j=0;j<A.size();j++){
            gas=gas+extra[(i+j)%A.size()];
            if(gas<0){
                break;
            }
        }
        if(gas>=0){
            ind=i;
            break;
        }
    }
    return ind;
}
int main(){
    int n,m,temp;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cin>>m;
    vector<int>B;
    for(int i=0;i<n;i++){
        cin>>temp;
        B.push_back(temp);
    }
    cout<<res(A,B);
    return 0;
}