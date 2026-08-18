#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y,Z;
	cin>>X>>Y>>Z;
	if (Z<50) {
	    cout<<X;
	} else {
	    cout<<X+((50-Z)*Y);
	}
    return 0;
}
