#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	if ((a*b*c)>x) {
	    cout<<"Cuboid";
	} else if ((a*b*c)<x) {
	    cout<<"Cube";
	} else if ((a*b*c) == x) {
	    cout<<"Equal";
	}

}
