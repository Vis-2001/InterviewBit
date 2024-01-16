#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(string A){
    int i=0;
    int j=A.length()-1;
    while(i<j){
        bool checki=false;
        bool checkj=false;
        if((A[i]-'a'>=0 && A[i]-'a'<26) || (A[i]-'A'>=0 && A[i]-'A'<26) || (A[i]-'0'>=0 && A[i]-'0'<10))
        {
            checki=true;
        }
        else{
            i++;
        }
        if((A[j]-'a'>=0 && A[j]-'a'<26) || (A[j]-'A'>=0 && A[j]-'A'<26) || (A[j]-'0'>=0 && A[j]-'0'<10))
        {
            checkj=true;
        }
        else{
            j--;
        }
        if(checki && checkj){
            if(A[i]-'A'>=0 && A[i]-'A'<26)
            {
                A[i]=A[i]-'A'+'a';
            }
            if(A[j]-'A'>=0 && A[j]-'A'<26)
            {
                A[j]=A[j]-'A'+'a';
            }
            if(A[i]!=A[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
    }
    return 1;
}
int main(){
    string A;
    cin>>A;
    cout<<res(A);
    return 0;
}