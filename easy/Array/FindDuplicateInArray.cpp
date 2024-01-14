#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(const vector<int> &A) {
    vector<int>freq(A.size(),0);
    for(auto x:A){
        freq[x]++;
        if(freq[x]==2){
            return x;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<res(arr);
    return 0;
}