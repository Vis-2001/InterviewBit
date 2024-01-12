#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(vector<int> &a) {
    int n=a.size();
    double sum=0;
    for(int x: a) {
        sum+=x;
    }
    double avg=sum/n;
    double var=0;
    for(int x:a) {
        var+=pow(x-avg,2);
    }
    var/=n;
    var=(var*100+0.5);
    int ans=var;
    var=ans/100.0;
    string str=to_string(var);
    for(int i=0;i<4;i++) {
        str.pop_back();
    }
    return str;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<res(arr);
    return 0;
}