#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin>>S;
	char S1 = S[0];
	char S2 = S[1];
	char S3 = S[2];
	if (S1 == S3 && S2=='w') {
	    cout<<"Cute";
	} else {
	    cout<<"No";
	}
	return 0;
	

}
