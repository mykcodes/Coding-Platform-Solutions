#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,N;
	cin>>X>>N;
	if (N*10>X) {
	    cout<<"0";
	} else {
	    cout<<(X-(N*10))/20;
	}
	return 0;-
}
