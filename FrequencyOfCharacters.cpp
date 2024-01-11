#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(string A){
    vector<int>freq(26,0);
    for(auto x:A){
        freq[x-'a']++;
    }
    return freq;
}
int main(){
    string a;
    cin>>a;
    vector<int>out=res(a);
    for(auto x:out){
        cout<<x<<endl;
    }
    return 0;
}