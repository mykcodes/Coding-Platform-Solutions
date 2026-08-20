#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	int R=N/20;
	if (20*R>N) {
	    cout<<R;
	} else {
	    cout << R+1;
	}
    return 0;
}
