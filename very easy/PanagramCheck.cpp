#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<string> A) {
    vector<int>freq(26,0);
    int cnt=0;
    for(auto x:A){
        for(auto y:x){
            if(freq[y-'a']==0){
                cnt++;
            }
            freq[y-'a']++;
        }
    }
    return cnt==26;
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<res(arr);
    return 0;
}