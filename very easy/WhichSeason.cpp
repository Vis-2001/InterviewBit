#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string res(int A) {
    if(A>=3 && A<=5){
        return "Spring";
    }
    else if(A>=6 && A<=8){
        return "Summer";
    }
    else if(A>=9 && A<=11){
        return "Autumn";
    }
    else if(A>=13 || A<=0){
        return "Invalid";
    }
    else{
        return "Winter";
    }
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}