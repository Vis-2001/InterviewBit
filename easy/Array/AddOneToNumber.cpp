#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>res(vector<int>A){
    int carry=1;
    int sum;
    bool c=false;
    for(int i=A.size()-1;i>=0;i--){
        sum=A[i]+carry;
        carry=sum/10;
        sum=sum%10;
        A[i]=sum;
        if(carry==0){
            c=true;
        }
    }
    if(c==false){
        A.insert(A.begin(),1);   
    }
    vector<int>ans;
    c=false;
    for(int i=0;i<A.size();i++){
        if(A[i]!=0 && c==false){
            c=true;
        }
        if(c){
            ans.push_back(A[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    // for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
    // }
    vector<int>out=res(arr);
    for(auto x:out){
        cout<<x<<" ";
    }
    return 0;
}