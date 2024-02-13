#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> res(vector<int> &A, int B) {
	vector<int> ret; 
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B)%A.size()]);
	}
	return ret; 
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cin>>n;
    arr=res(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}