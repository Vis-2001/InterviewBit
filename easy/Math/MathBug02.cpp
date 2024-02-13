#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
vector<vector<int> > res(int A) {
	vector<vector<int> > ans;
	for (int a = 1; a * a < A; a++) {
		for (int b = a; b * b < A; b++) {
			if (a * a + b * b == A) {
				vector<int> newEntry; 
				newEntry.push_back(a);
				newEntry.push_back(b);
				ans.push_back(newEntry);
			}
		}
	}
	return ans;
}
int main(){
    int n;
    cin>>n;
    for(auto x:res(n)){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}