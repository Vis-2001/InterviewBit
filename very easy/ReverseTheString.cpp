#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
string res(string A){
    vector<string>v;
    string temp="";
    for(int i=0;i<A.length();i++){
        if(A[i]==' '){
            if(temp.length()!=0){
                v.push_back(temp);
            }
            temp="";
        }
        else{
            temp=temp+A[i];   
        }
    }
    if(temp.length()!=0){
        v.push_back(temp);
    }
    temp=v[0];
    for(int i=1;i<v.size();i++){
        cout<<temp<<endl;
        temp=v[i]+" "+temp;
    }
    cout<<temp<<endl;
    return temp;
}
int main(){
    string A;
    cin>>A;
    cout<<res(A);
    return 0;
}