#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	int X = N/10;
	if (X*10 < N) {
	    cout<<(X+1)*10 - N;
	}

}
