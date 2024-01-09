#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A){
    int ele=A[0];
    int cnt=1;
    for(int i=1;i<A.size();i++){
        if(A[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0){
            ele=A[i];
            cnt=1;
        }
    }
    return ele;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cout<<res(A);
    return 0;
}