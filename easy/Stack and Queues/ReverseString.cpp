#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(string A) {
    stack<char>st;
    for(auto x:A){
        st.push(x);
    }
    A="";
    while(st.empty()==false){
        A=A+st.top();
        st.pop();
    }
    return A;
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}
