#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A){
    map<char,int>m;
    int i=0;
    int j=0;
    int ans=0;
    while(j<A.length()){
        m[A[j]]++;
        if(m[A[j]]>1){
            while(m[A[j]]>1){
                m[A[i]]--;
                i++;
            }
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}