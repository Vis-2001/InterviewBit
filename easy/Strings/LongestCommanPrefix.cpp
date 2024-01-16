#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(vector<string>A){
    sort(A.begin(),A.end());
    string ans=A[0];
    for(int i=1;i<A.size();i++){
        string str="";
        for(int j=0;j<ans.size();j++){
            if(A[i][j]==ans[j]){
                str=str+ans[j];
            }
            else{
                break;
            }
        }
        ans=str;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<res(A);
    return 0;
}