#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A, int B) {
    int ans=0;
    for(int i=0;i<A.length();i=i+B){
        int subAns=0;
        for(int j=0;j<B;j++){
            if(i+j>=A.length()){
                break;
            }
            if(A[i+j]=='a'){
                subAns++;
            }
        }
        ans=max(ans,subAns);
    }
    return ans;
}
int main(){
    string str;
    int n;
    cin>>n>>str;
    cout<<res(str,n);
    return 0;
}
