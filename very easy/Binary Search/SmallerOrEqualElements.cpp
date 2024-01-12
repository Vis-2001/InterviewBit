#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int res(vector<int>A,int B){
     int low=0;
    int n=A.size();
    int high=n-1;
    int res=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(B==A[mid]){
            res=mid+1;
            low=mid+1;
            }
        else if(B<A[mid]){
            high =mid-1;
            res=mid;
            }
        else {
            low=mid+1;
            res=mid+1;
            }
    }
    return res;
}
