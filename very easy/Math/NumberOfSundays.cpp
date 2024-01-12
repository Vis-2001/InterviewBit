#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A, int B) {
    if(A=="Monday"){
        return (B)/7;
    }
    else if(A=="Tuesday"){
        return (B+1)/7;
    }
    else if(A=="Wednesday"){
        return (B+2)/7;
    }
    else if(A=="Thursday"){
        return (B+3)/7;
    }
    else if(A=="Friday"){
        return (B+4)/7;
    }
    else if(A=="Saturday"){
        return (B+5)/7;
    }
    else{
        return (B+6)/7;
    }
}
int main(){
    int n;
    string str;
    cin>>n>>str;
    cout<<res(str,n);
    return 0;
}
