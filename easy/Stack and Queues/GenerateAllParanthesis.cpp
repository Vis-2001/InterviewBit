#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(string A) {
    stack<char>st;
    for(auto x:A){
        if(x=='{' || x=='(' || x=='['){
            st.push(x);
        }
        else{
            if(st.empty()){
                return 0;
            }
            if(x=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
            else if(x==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
            else{
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
    }
    return st.empty();
}
int main(){
    string str;
    cin>>str;
    cout<<res(str);
    return 0;
}
