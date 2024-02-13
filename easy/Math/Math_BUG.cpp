#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int res(int A) {
    if(A==1)return 0;
	int upperLimit = (int)(sqrt(A));
	for (int i = 2; i <= upperLimit; i++) {
		if (A % i == 0) return 0;
	}
	return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
    return 0;
}