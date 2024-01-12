#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res(vector<string>A)
{
    int val;
    stack<long long int> st;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != "+" && A[i] != "-" && A[i] != "*" && A[i] != "/")
        {
            st.push(stoi(A[i]));
        }
        else if (A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (A[i] == "+")
                st.push(a + b);
            else if (A[i] == "-")
                st.push(b - a);
            else if (A[i] == "*")
                st.push(a * b);
            else if (A[i] == "/")
                st.push(b / a);
        }
    }
    return st.top();
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