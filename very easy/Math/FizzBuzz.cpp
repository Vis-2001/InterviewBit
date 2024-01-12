#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string>res(int A){
    vector<string>ans;
    for(int i=1;i<=A;i++){
        if(i%5==0 && i%3==0){
            ans.push_back("FizzBuzz");
        }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
    }
    return ans;
}
void print(vector<string>v){
    for(auto x:v){
        cout<<x<<" ";
    }
}
int main(){
    int A;
    cin>>A;
    print(res(A));
    return 0;
}