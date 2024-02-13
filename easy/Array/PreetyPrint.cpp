#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
vector<vector<int> > res(int A) {
    vector<vector<int>>ans(2*A-1,vector<int>(2*A-1,A));
    int val=A;
    bool rev=false;
    for(int i=0;i<ans.size();i++){
        int cur=A;
        bool currev=false;
        for(int j=0;j<ans[0].size();j++){
            ans[i][j]=max(cur,val);
            if(currev){
                cur++;
            }
            else{
                cur--;    
            }
            if(cur==0){
                currev=true;
                cur=2;
            }
        }
        if(rev){
            val++;
        }
        else{
            val--;
        }
        if(val==0){
            rev=true;
            val=2;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    for(auto x:res(n)){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
