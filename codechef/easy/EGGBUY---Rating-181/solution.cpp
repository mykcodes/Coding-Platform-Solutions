#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,f;
	cin>>x>>f>>y;
	if (12*x < (12*y)+f) {
	    cout<<(12*y)+f;
	} else {
	    cout<<12*x;
	}

}
